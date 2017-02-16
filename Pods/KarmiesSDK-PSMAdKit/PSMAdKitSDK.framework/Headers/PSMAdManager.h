#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#define kGlobal @"global"
#define kBanner @"banner"
#define kSquare @"square"
#define kNative @"native"
#define kPlacements @"placements"


@class PSMAdView;

typedef enum {
	PSMAdTypeBanner,
    PSMAdTypeLongBanner,
	PSMAdTypeSquare,
    PSMAdTypeNative
} PSMAdType;

@interface PSMAdManager : NSObject

/**
 *  Call this method prior to using a [PSMAdManager sharedInstance].
 *
 *  @param OneLouderAppID One louder application id.
 *
 *  @return PSMAdManager singleton object.
 */
+ (nullable PSMAdManager *)startWithApplicationId:(nonnull NSString*)OneLouderAppID;
/**
 *  Returns a PSMAdManager singleton. "startWithApplicationId" should be called ad some point before calling this method.
 */
+ (nullable PSMAdManager *)sharedInstance;

// These properties are set in configuration file

/**
 *  Wether or not a close button should be present on ad views. This property is set in configuration file.
 */
@property (nonatomic, readonly) BOOL btnCloseEnabled;
/**
 *  Wether or not ads are enabled. This property is set in configuration file.
 */
@property (nonatomic, unsafe_unretained) BOOL adsEnabled;
/**
 *  An advertising identifier. This property is set in configuration file.
 */
@property (nullable, nonatomic, readonly) NSString *advertisingIdentifierString;
/**
 *  Global targeting parameters for ad requests. This property is set in configuration file.
 */
@property (nonnull, nonatomic, readonly) NSDictionary* targetingParameters;


/**
 *  Current location. An optional parameter that can be used to tune up ads.
 */
@property (nullable, nonatomic, strong) CLLocation *location;
/**
 *  User's Twitter ID. An optional parameter that can be used to tune up ads.
 */
@property (nullable, nonatomic, strong) NSString *twitterId;
/**
 *  User's phone number. An optional parameter that can be used to tune up ads.
 */
@property (nullable, nonatomic, strong) NSString *phone;
/**
 *  User's email. An optional parameter that can be used to tune up ads.
 */
@property (nullable, nonatomic, strong) NSString *email;

/**
 *  Returns a dictionary that represent placement with given name and type for the current device.
 *
 *  @param name      Placement name. "global" by default.
 *  @param adTypeKey Placement ad type.
 *
 *  @return A placement.
 */
- (nullable NSDictionary*)placementWithName:(nullable NSString*)name adTypeKey:(nonnull NSString*)adTypeKey;

/**
 *  Returns the SDK version.
 */
- (nonnull NSString *)sdkVersion;

-(void)reportEventWithName:(nonnull NSString*)eventName forPlacement:(nullable NSDictionary*)placement withTargetParams:(nullable NSMutableDictionary*)targetParams;

@end

