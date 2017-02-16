//
//  PSMInterstitialAd.h
//  OLAdKitSDK
//
//  Created by Alex Volovoy on 11/28/12.
//  Copyright (c) 2012 OneLouder Apps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSMAdManager.h"
 
@class PSMInterstitialAd;

@protocol PSMInterstitialAdDelegate  <NSObject>

@optional
/**
 *  A callback to let the app know that the full screen web view has been activated.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdFullScreenWebViewActivated:(nonnull PSMInterstitialAd*)psmInterstitialAd;
/**
 *  A callback to let the app know that the full screen web view has been closed.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdFullScreenWebViewClosed:(nonnull PSMInterstitialAd*)psmInterstitialAd;

/**
 *  Deprecated.
 */
- (void) psmInterstitialAdDidExpand:(nonnull PSMInterstitialAd*)psmInterstitialAd __attribute__((deprecated("psmInterstitialAdDidExpand deprecated in version 4.0.")));
/**
 *  Deprecated.
 */
- (void) psmInterstitialAdDidCollapse:(nonnull PSMInterstitialAd*)psmInterstitialAd __attribute__((deprecated("psmInterstitialAdDidCollapse deprecated in version 4.0.")));

/**
 *  A callback to let the app know that a full screen interstitial has been activated.
 *  This callback is useful if your app needs to pause any onscreen activity while the interstitial is being viewed. To resume an activity you can use a "psmInterstitialAdInterstitialClosed" method.
 *  This method is optional since psmInterstitialAdFullScreenWebViewActivated will be called as well in case only that is implemented.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdInterstitialActivated:(nonnull PSMInterstitialAd*)psmInterstitialAd;
/**
 *  A callback to let the app know that a full screen interstitial has been closed.
 *  This callback is useful if your app needs to resume any activity that has been paused while the interstitial was displayed.
 *  This method is optional since psmInterstitialAdFullScreenWebViewClosed will be called as well in case only that is implemented.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdInterstitialClosed:(nonnull PSMInterstitialAd*)psmInterstitialAd;

/**
 *  Callback to let app know that a special banner has been clicked.  This method is provided to help track if an ad click is respondible for sending the user out of the app.
 *  Either this method, psmInterstitialAdFullScreenWebViewActivated should be called on ad click where supported.
 *  Examples click actions that would trigger this are click to call, click to app, click to itunes, etc.
 *  If the app is going to exit or go to the background the the normal UIApplicationDelegate methods will still get called after this.
 *  NOTE: Some ad network SDKs don't provide a tracking option for ads that don't open a full screen view so our SDK can't provide this additional information in those cases.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdWasClicked:(nonnull PSMInterstitialAd*)psmInterstitialAd;

/**
 *  A callback that lets you know the status of a call to requestInterstitialAd. It will be called once the ad has loaded successfully.
 *  As a safetey precaution there is a timer setup that guarantees that either of psmInterstitialAdSucceeded and psmInterstitialAdFailed will be called within 10 seconds in case something went wrong and the application is waiting for a response.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdSucceeded:(nonnull PSMInterstitialAd*)psmInterstitialAd;
/**
 *  A callback that lets you know an interstitial ad request has failed.
 *  As a safetey precaution there is a timer setup that guarantees that either of psmInterstitialAdSucceeded and psmInterstitialAdFailed will be called within 10 seconds in case something went wrong and the application is waiting for a response.
 *
 *  @param psmInterstitialAd The interstitial that triggered the event.
 */
- (void) psmInterstitialAdFailed:(nonnull PSMInterstitialAd*)psmInterstitialAd;

/**
 *  Space delimited keywords (ex: MOVIE CATS FUNNY)
 */
@property (nullable, nonatomic, strong) NSString* adKeywords;
/**
 *  Targeting parameters for the ad request. (See Optional Targeting Parameter Constants listed above). Apply any of these to give the Ad SDK any additional information about the user, allowing the Ad SDK to deliver ads relevant to the user.
 */
@property (nullable, nonatomic, readonly) NSDictionary *adTargetingParameters;

/**
 *  Returns the view controller that will be responsible for displaying modal views.
 *  This is used when the SDK needs to takeover full screen (such as when an ad is clicked). If this method is not implemented, the SDK will attempt to identify the appropriate view controller to call for presenting the interstitial.
 *  NOTE: As of iOS 6 the app now controls which orientations can be used by ads/in-app browser in either the Info.plist or in the AppDelegate application:supportedInterfaceOrientationsForWindow: method.
 *  We recommend for maximum compatibility with RichMedia ads that your app enables all orientations and then programatically restricts orientations where necessary using the UIViewController supportedInterfaceOrientations method.
 */
@property (nullable, nonatomic, readonly) UIViewController *adTopViewController;

@end


@interface PSMInterstitialAd : NSObject  

@property (nullable, nonatomic, weak) id<PSMInterstitialAdDelegate> delegate;
/**
 *  Helper method to display interstital ad at the point you enter specific view controller.
 *  requestAdWithPlacementName:@"screenchange" will be called if ad is not ready
 *  displayAdWithPlacementName:@"screenchange" will be called if ad is ready
 */
-(void) displayScreenAd;

/**
 *  Helper method to display interstital ad at the point you either start start the application or coming back from background state.
 *  requestAdWithPlacementName:@"launch" will be called if ad is not ready
 *  displayAdWithPlacementName:@"launch" will be called if ad is ready
 */
-(void) displayLaunchAd;

/**
 *  Checks if there is ad available for given placement name.
 *
 *  @param name Placement name
 */
-(BOOL) isAdReadyForPlacementName:(nonnull NSString*)name;

/**
 *  If isAdReadyForPlacementName check returns NO - call this methods to request the ad.
 *
 *  @param name Placement name.
 */
-(void) requestAdWithPlacementName:(nonnull NSString*)name;

/**
 *  If isAdReadyForPlacementName check returns YES - call this methods to display the ad.
 *
 *  @param name Placement name.
 */
-(void) displayAdWithPlacementName:(nonnull NSString*)name;

@end
