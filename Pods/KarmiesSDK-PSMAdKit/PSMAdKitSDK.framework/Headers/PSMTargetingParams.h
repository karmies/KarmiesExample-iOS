//
//  PSMTargetingParams.h
//  PSMAdKitSDK
//
//  Created by Demid Merzlyakov on 16.08.16.
//  Copyright © 2016 OneLouder Apps. All rights reserved.
//

//These parameters are defined in AdMarvelDelegate.h
#ifdef TARGETING_PARAM_APP_VERSION
#undef TARGETING_PARAM_APP_VERSION
#endif
#ifdef TARGETING_PARAM_MSISDN
#undef TARGETING_PARAM_MSISDN
#endif
#ifdef TARGETING_PARAM_CARRIER
#undef TARGETING_PARAM_CARRIER
#endif
#ifdef TARGETING_PARAM_AGE
#undef TARGETING_PARAM_AGE
#endif
#ifdef TARGETING_PARAM_DOB
#undef TARGETING_PARAM_DOB
#endif
#ifdef TARGETING_PARAM_AREA_CODE
#undef TARGETING_PARAM_AREA_CODE
#endif
#ifdef TARGETING_PARAM_POSTAL_CODE
#undef TARGETING_PARAM_POSTAL_CODE
#endif
#ifdef TARGETING_PARAM_GENDER
#undef TARGETING_PARAM_GENDER
#endif
#ifdef TARGETING_PARAM_GEOLOCATION
#undef TARGETING_PARAM_GEOLOCATION
#endif
#ifdef TARGETING_PARAM_DMA
#undef TARGETING_PARAM_DMA
#endif
#ifdef TARGETING_PARAM_ETHNICITY
#undef TARGETING_PARAM_ETHNICITY
#endif
#ifdef TARGETING_PARAM_SEEKING
#undef TARGETING_PARAM_SEEKING
#endif
#ifdef TARGETING_PARAM_INCOME
#undef TARGETING_PARAM_INCOME
#endif
#ifdef TARGETING_PARAM_MARITAL
#undef TARGETING_PARAM_MARITAL
#endif
#ifdef TARGETING_PARAM_EDUCATION
#undef TARGETING_PARAM_EDUCATION
#endif
#ifdef TARGETING_PARAM_KEYWORDS
#undef TARGETING_PARAM_KEYWORDS
#endif
#ifdef TARGETING_PARAM_SEARCH
#undef TARGETING_PARAM_SEARCH
#endif
#ifdef TARGETING_PARAM_INT_TYPE
#undef TARGETING_PARAM_INT_TYPE
#endif
#ifdef TARGETING_PARAM_UNIQUE_ID
#undef TARGETING_PARAM_UNIQUE_ID
#endif
#ifdef TARGETING_PARAM_UDID
#undef TARGETING_PARAM_UDID
#endif

#pragma mark - Non-bid request attributes
/**
 *  Incrementing version of app useful for targeting campaigns (ex: 1.4.2)
 */
extern NSString * const PSMTargetingParamAppVersion;
/**
 *  Phone number with country code (ex: 16501234567)
 */
extern NSString * const PSMTargetingParamMsisdn;
/**
 *  ID of the carrier
 */
extern NSString * const PSMTargetingParamCarrier;
/**
 *  Age (ex: 27)
 */
extern NSString * const PSMTargetingParamAge;
/**
 *  Date of birth in format yyyy-mm-dd (ex: 2008-05-25)
 */
extern NSString * const PSMTargetingParamDateOfBirth;
/**
 *  Area code (ex: 650)
 */
extern NSString * const PSMTargetingParamAreaCode;
/**
 *  Postal code (ex: 94123)
 */
extern NSString * const PSMTargetingParamPostalCode;
/**
 *  Gender: "m" or "male"", "f" or "female", "o" or "other".
 */
extern NSString * const PSMTargetingParamUserGender;
/**
 *  Latitude and longitude (ex: 32.9014,-117.2079)
 */
extern NSString * const PSMTargetingParamGeolocation;
/**
 *  Designated Marketing Area code (ex: 807)
 */
extern NSString * const PSMTargetingParamDma;
/**
 *  Ethnicity:0-African American,1-Asian,2-Hispanic,3-White,4-Other
 */
extern NSString * const PSMTargetingParamEthnicity;
/**
 *  Gender interested in: "m" or "male"", "f" or "female", "both"
 */
extern NSString * const PSMTargetingParamSeeking;
/**
 *  Income (ex: 50000)
 */
extern NSString * const PSMTargetingParamIncome;
/**
 *  Marital status: "single" or "married"
 */
extern NSString * const PSMTargetingParamMarital;
/**
 *  Education level:0-No College,1-College Degree,2-Graduate School
 */
extern NSString * const PSMTargetingParamEducation;
/**
 *  Space delimited keywords (ex: MOVIE CATS FUNNY)
 */
extern NSString * const PSMTargetingParamKeywords;
/**
 *  User search, can really affect fill rates so recommended to use keywords instead
 */
extern NSString * const PSMTargetingParamSearch;
/**
 *  Interstitial type: "AppOpen", "PreRoll", "PostRoll", "AppClose", "ScreenChange", "Other" or custom value.
 */
extern NSString * const PSMTargetingParamIntType;
/**
 *  This is the unique ID AdMarvel will use for frequency capping.  This will automatically be generated but the app can overwrite it if they want (please see README for more details).
 */
extern NSString * const PSMTargetingParamUniqueId;
/**
 *  If you have access to the UDID and need it for advertising then send it in this targeting parameter. The raw UDID is preferred as it is more flexible.
 */
extern NSString * const PSMTargetingParamUdid;

#pragma mark Bid request attributes

/**
 *  Indicator of test mode in which auctions are not billable. YES for test mode, NO for live mode.
 */
extern NSString * const PSMTargetingParamTest; //To AdSDK developers: 1 by default when the SDK is built in debug mode.

/**
 *  An NSArray of PSMContentCategory enum values wrapped into NSNumbers that describe the current section of the app.
 *  E.g. @[@(PSMContentCategoryEducationCollegeLife), @(PSMContentCategoryArtsEntertainmentMovies)];
 */
extern NSString * const PSMTargetingParamAppSectionCategories;
/**
 *  An NSArray of PSMContentCategory enum values wrapped into NSNumbers that describe the current app page or view.
 *  E.g. @[@(PSMContentCategoryEducationCollegeLife), @(PSMContentCategoryArtsEntertainmentMovies)];
 */
extern NSString * const PSMTargetingParamAppPageCategories;
/**
 *  Comma separated list of keywords about the app.
 */
extern NSString * const PSMTargetingParamAppKeywords;

/**
 *  Year of birth of the user (NSNumber). If the parameter value is not specified, an attempt to parse a value from PSMTargetingParamDateOfBirth will be made.
 *  However, it is more efficient to set this value separately.
 */
extern NSString * const PSMTargetingParamUserYearOfBirth;
/**
 *  Comma separated list of keywords, interests, or intent.
 */
extern NSString * const PSMTargetingParamUserKeywords;

/**
 *  ID uniquely identifying the content (string).
 */
extern NSString * const PSMTargetingParamContentId;
/**
 *  Episode number (typically applies to video content). NSNumber.
 */
extern NSString * const PSMTargetingParamContentEpisode;
/**
 *  Content title (string).
 *  Video Examples: “Search Committee” (television), “A New Hope” (movie), or “Endgame” (made for web).
 *  Non-Video Example: “Why an Antarctic Glacier Is Melting So Quickly” (Time magazine article).
 */
extern NSString * const PSMTargetingParamContentTitle;
/**
 *  Content series.
 *  Video Examples: “The Office” (television), “Star Wars” (movie),
 or “Arby ‘N’ The Chief” (made for web).
 *  Non-Video Example: “Ecocentric” (Time Magazine blog).
 */
extern NSString * const PSMTargetingParamContentSeries;
/**
 *  Content season (string); typically for video content (e.g., “Season 3”).
 */
extern NSString * const PSMTargetingParamContentSeason;
/**
 *  Content producer or originator ID. Useful if content is syndicated and may be posted on a site using embed tags.
 */
extern NSString * const PSMTargetingParamContentProducerId;
/**
 *  Content producer or originator name (e.g., “Warner Bros”).
 */
extern NSString * const PSMTargetingParamContentProducerName;
/**
 *  An NSArray of PSMContentCategory enum values wrapped into NSNumbers that describe the content producer.
 *  E.g. @[@(PSMContentCategoryEducationCollegeLife), @(PSMContentCategoryArtsEntertainmentMovies)];
 */
extern NSString * const PSMTargetingParamContentProducerCategories;
/**
 *  Highest level domain of the content producer (e.g., “producer.com”).
 */
extern NSString * const PSMTargetingParamContentProducerDomain;
/**
 *  URL for the content (e.g. an article) the user is currently viewing.
 */
extern NSString * const PSMTargetingParamContentURL;
/**
 *  An NSArray of PSMContentCategory enum values wrapped into NSNumbers that describe the content producer.
 *  E.g. @[@(PSMContentCategoryEducationCollegeLife), @(PSMContentCategoryArtsEntertainmentMovies)];
 */
extern NSString * const PSMTargetingParamContentCategories;
/**
 *  A PSMVideoQuality value wrapped into an NSNumber.
 */
extern NSString * const PSMTargetingParamContentVideoQuality;
/**
 *  Type of content. A PSMContentContext value wrapped into an NSNumber.
 */
extern NSString * const PSMTargetingParamContentContext;
/**
 *  Content rating (e.g., MPAA). A string.
 */
extern NSString * const PSMTargetingParamContentContentRating;
/**
 *  User rating of the content (e.g., number of stars, likes, etc.). A string.
 */
extern NSString * const PSMTargetingParamContentUserRating;
/**
 *  Media rating per QAG guidelines (IAB Quality Assurance Guidelines). A PSMQAGMediaRating value wrapped into an NSNumber.
 */
extern NSString * const PSMTargetingParamContentQAGMediaRating;
/**
 *  Comma separated list of keywords describing the content (string).
 */
extern NSString * const PSMTargetingParamContentKeywords;
/**
 *  An NSNumber: 0 = not live, 1 = content is live (e.g., stream, live blog).
 */
extern NSString * const PSMTargetingParamContentLivestream;
/**
 *  An NSNumber: 0 = indirect, 1 = direct.
 */
extern NSString * const PSMTargetingParamContentSourceRelationship;
/**
 *  Length of content in seconds; appropriate for video or audio (NSNumber).
 */
extern NSString * const PSMTargetingParamContentLength;
/**
 *  Content language using ISO-639-1-alpha-2 (string).
 */
extern NSString * const PSMTargetingParamContentLanguage;
/**
 *  Indicator of whether or not the content is embeddable (e.g., an embeddable video player), where 0 = no, 1 = yes.
 */
extern NSString * const PSMTargetingParamContentEmbeddable;

/**
 *  Flag indicating if this request is subject to the COPPA regulations established by the USA FTC. A boolean value (wrapped into an NSNumber).
 */
extern NSString * const PSMTargetingParamRegsCoppa;

#pragma mark Deprecated constants

/**
 *  Incrementing version of app useful for targeting campaigns (ex: 1.4.2)
 */
extern NSString * const TARGETING_PARAM_APP_VERSION __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamAppVersion instead.");
/**
 *  Phone number with country code (ex: 16501234567)
 */
extern NSString * const TARGETING_PARAM_MSISDN __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamMsisdn instead.");
/**
 *  ID of the carrier
 */
extern NSString * const TARGETING_PARAM_CARRIER __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamCarrier instead.");
/**
 *  Age (ex: 27)
 */
extern NSString * const TARGETING_PARAM_AGE __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamAge instead.");
/**
 *  Date of birth in format yyyy-mm-dd (ex: 2008-05-25)
 */
extern NSString * const TARGETING_PARAM_DOB __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamDateOfBirth instead.");
/**
 *  Area code (ex: 650)
 */
extern NSString * const TARGETING_PARAM_AREA_CODE __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamAreaCode instead.");
/**
 *  Postal code (ex: 94123)
 */
extern NSString * const TARGETING_PARAM_POSTAL_CODE __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamPostalCode instead.");
/**
 *  Gender: "m" or "male"", "f" or "female"
 */
extern NSString * const TARGETING_PARAM_GENDER __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamUserGender instead.");
/**
 *  Latitude and longitude (ex: 32.9014,-117.2079)
 */
extern NSString * const TARGETING_PARAM_GEOLOCATION __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamGeolocation instead.");
/**
 *  Designated Marketing Area code (ex: 807)
 */
extern NSString * const TARGETING_PARAM_DMA __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamDma instead.");
/**
 *  Ethnicity:0-African American,1-Asian,2-Hispanic,3-White,4-Other
 */
extern NSString * const TARGETING_PARAM_ETHNICITY __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamEthnicity instead.");
/**
 *  Gender interested in: "m" or "male"", "f" or "female", "both"
 */
extern NSString * const TARGETING_PARAM_SEEKING __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamSeeking instead.");
/**
 *  Income (ex: 50000)
 */
extern NSString * const TARGETING_PARAM_INCOME __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamIncome instead.");
/**
 *  Marital status: "single" or "married"
 */
extern NSString * const TARGETING_PARAM_MARITAL __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamMarital instead.");
/**
 *  Education level:0-No College,1-College Degree,2-Graduate School
 */
extern NSString * const TARGETING_PARAM_EDUCATION __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamEducation instead.");
/**
 *  Space delimited keywords (ex: MOVIE CATS FUNNY)
 */
extern NSString * const TARGETING_PARAM_KEYWORDS __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamKeywords instead.");
/**
 *  User search, can really affect fill rates so recommended to use keywords instead
 */
extern NSString * const TARGETING_PARAM_SEARCH __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamSearch instead.");
/**
 *  Interstitial type: "AppOpen", "PreRoll", "PostRoll", "AppClose", "ScreenChange", "Other" or custom value.
 */
extern NSString * const TARGETING_PARAM_INT_TYPE __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamIntType instead.");
/**
 *  This is the unique ID AdMarvel will use for frequency capping.  This will automatically be generated but the app can overwrite it if they want (please see README for more details).
 */
extern NSString * const TARGETING_PARAM_UNIQUE_ID __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamUniqueId instead.");
/**
 *  If you have access to the UDID and need it for advertising then send it in this targeting parameter. The raw UDID is preferred as it is more flexible.
 */
extern NSString * const TARGETING_PARAM_UDID __deprecated_msg("First deprecated in 5.1.0. Use PSMTargetingParamUdid instead.");

#pragma mark - Enums

typedef NS_ENUM(NSUInteger, PSMVideoQuality) {
    PSMVideoQualityUnknown = 0,
    PSMVideoQualityProfessionallyProduced,
    PSMVideoQualityProsumer,
    PSMVideoQualityUserGenerated
};

typedef NS_ENUM(NSUInteger, PSMContentContext) {
    /**
     *  Video (a video file or stream that is being watched by the user, including (Internet) television broadcasts).
     */
    PSMContentContextVideo = 1,
    /**
     *  Game (an interactive software game that is being played by the user).
     */
    PSMContentContextGame = 2,
    /**
     *  Music (an audio file or stream that is being listened to by the user, including (Internet) radio broadcasts).
     */
    PSMContentContextMusic = 3,
    /**
     *  Application (an interactive software application that is being used by the user).
     */
    PSMContentContextApplication = 4,
    /**
     *  Text (a document that is primarily textual in nature that is being read or viewed by the user, including web page, eBook, or news article).
     */
    PSMContentContextText = 5,
    /**
     *  Other (content type unknown or the user is consuming content which does not fit into one of the categories above).
     */
    PSMContentContextOther = 6,
    /**
     *  Unknown.
     */
    PSMContentContextUnknown = 7
};

typedef NS_ENUM(NSUInteger, PSMQAGMediaRating) {
    PSMQAGMediaRatingAllAudiences = 1,
    PSMQAGMediaRatingEveryoneOver12 = 2,
    PSMQAGMediaRatingMatureAudiences = 3,
};
