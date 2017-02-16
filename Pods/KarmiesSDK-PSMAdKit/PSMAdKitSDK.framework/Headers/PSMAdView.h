//
//  PSMAdView.h
//
//  Created by Alex Volovoy.
//  Copyright (c) 2012 OneLouder Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSMAdManager.h"

#import "PSMTargetingParams.h"
#import "PSMContentCategory.h"

#pragma mark Ad sizes

#define BANNER_RECT CGRectMake(0, 0, 320, 50)
#define SQUARE_RECT CGRectMake(0, 0, 300, 250)
#define BANNER_LONG_RECT CGRectMake(0, 0, 768, 90)

@protocol PSMAdViewDelegate;

/**
 *  View for displaying the ads.  Add this to your main view.
 */
@interface PSMAdView : UIView

@property (nullable, nonatomic, weak) id<PSMAdViewDelegate> delegate;
/**
 *  A button for closing the ad.
 */
@property (nullable, nonatomic, strong, readonly) UIButton *btnClose;
/**
 *  Is the ad ready to be shown.
 */
@property (nonatomic, readonly) BOOL adReady;
/**
 *  YES, if an ad has been requested, but isn't ready yet.
 */
@property (nonatomic, readonly) BOOL adRequested;

/**
 *  Deprecated. Background color for the ad view.
 */
@property (nullable, nonatomic, strong) UIColor* textAdBackgroundColor DEPRECATED_MSG_ATTRIBUTE("textAdBackgroundColor deprecated in version 5.1.0.");

/**
 *  @param placement The placement name that will be used to request ads for this ad view.
 *  @param adType    Type of ads to be displayed in this ad view.
 */
-(nonnull instancetype) initWithFrame:(CGRect)frame adPlacement:(nonnull NSString*)placement withAdType:(PSMAdType)adType;
/**
 *  Sets an ad placement and an ad type for this ad view.
 *
 *  @param placement The placement name that will be used to request ads for this ad view.
 *  @param adType    Type of ads to be displayed in this ad view.
 */
-(void) setPlacement:(nonnull NSString*)placement withAdType:(PSMAdType)adType;

/**
 *  Requests an ad and starts regular ad updates.
 */
-(void) startAndRequestAd;
/**
 *  Requests an ad.
 */
-(void) requestAd;
/**
 *  Starts regular ad updates. Call this when you previously called stop and want to resume normal ad view processing.
 */
-(void) start;
/**
 *  Stops regular ad updates. Call this when you want to pause the ad view from processing.
 */
-(void) stop;

/**
 *  Resets the ad view to its initial state.
 */
-(void) reset;

/**
 *  This method lets the app indicate that it considers the AdView to be visible. This is useful when AdViews are emebbed in a scrolling view and need to be loaded in advance.
 *  Calling this method will let the AdView notify the creative of the status change. For most ads this is a no op but if an ad supports this feature it can take the appropriate action.
 *  This method is required when you are using custom offline campaigns for recording the appropriate impression data.
 */
- (void) adViewDisplayed;
/**
 *  This method lets the app indicate that it considers the AdView to hidden. This is useful when AdViews are emebbed in a scrolling view and need to be loaded in advance.
 *  Calling this method will let the AdView notify the creative of the status change. For most ads this is a no op but if an ad supports this feature it can take the appropriate action.
 *  This method is required when you are using custom offline campaigns for recording the appropriate impression data. 
 */
- (void) adViewHidden;

@end


@protocol PSMAdViewDelegate <NSObject>
/**
 *  Returns the view controller that will be responsible for displaying modal views.
 *  This is used when the SDK needs to takeover full screen (such as when an ad is clicked). If this method is not implemented, the SDK will attempt to identify the appropriate view controller to call for presenting the interstitial.
 *  NOTE: As of iOS 6 the app now controls which orientations can be used by ads/in-app browser in either the Info.plist or in the AppDelegate application:supportedInterfaceOrientationsForWindow: method.
 *  We recommend for maximum compatibility with RichMedia ads that your app enables all orientations and then programatically restricts orientations where necessary using the UIViewController supportedInterfaceOrientations method.
 */
@property (nullable, nonatomic, readonly) UIViewController *adTopViewController;

@optional
/**
 *  Targeting parameters for the ad request. (See Optional Targeting Parameter Constants listed above). Apply any of these to give the Ad SDK any additional information about the user, allowing the Ad SDK to deliver ads relevant to the user.
 */
@property (nullable, nonatomic, readonly) NSDictionary *adTargetingParameters;

/**
 *  A callback to let the app know that the full screen web view has been activated.
 *  This callback is useful if your app needs to pause any onscreen activity while the web view is being viewed (i.e. for a game).
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewfullScreenWebViewActivated:(nonnull PSMAdView *)psmAdView;
/**
 *  A callback to let the app know that the full screen web view has been closed.
 *  Use this callback to request a new ad if necessary.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewfullScreenWebViewClosed:(nonnull PSMAdView *)psmAdView;

/**
 *  A callback to let the app know that an ad has just expanded. This means that an ad is taking up part of the screen but interaction with various elements of the app may still be possible.
 *  If it has expanded then the ad is currently currently displaying over some of the content.  The app should keep track of this and call collapseAd if the user interacts with the app instead of the ad.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdDidExpand:(nonnull PSMAdView *)psmAdView;
/**
 *  A callback to let the app know that an expandable ad has just collased.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdDidCollapse:(nonnull PSMAdView *)psmAdView;

/**
 *  Callback to let app know that a special banner has been clicked.  This method is provided to help track if an ad click is responsible for sending the user out of the app.
 *  Either this method, fullScreenWebViewActivated, adDidExpand  should be called on ad click where supported.
 *  Examples click actions that would trigger this are click to call, click to app, click to itunes, etc.
 *  If the app is going to exit or go to the background the normal UIApplicationDelegate methods will still get called after this.
 *  NOTE: Some ad network SDKs don't provide a tracking option for ads that don't open a full screen view so our SDK can't provide this additional information in those cases.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewWasClicked:(nonnull PSMAdView *)psmAdView;

/**
 *  A callback to let the app know that an ad has been successfully requested.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdSucceeded:(nonnull PSMAdView *)psmAdView;
/**
 *  A callback to let the app know that an ad request has failed.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdFailed:(nonnull PSMAdView *)psmAdView;
/**
 *  A callback to let the app know that the close button has been pressed on the ad view.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdClosed:(nonnull PSMAdView *)psmAdView;
/**
 *  A callback to let the app know that an ad has been requested.
 *
 *  @param psmAdView The Ad View that initiated the event.
 */
- (void) psmAdViewAdRequested:(nonnull PSMAdView *)psmAdView;

/**
 *  Space delimited keywords (ex: MOVIE CATS FUNNY)
 */
- (nullable NSString*) adKeywords;


@end
