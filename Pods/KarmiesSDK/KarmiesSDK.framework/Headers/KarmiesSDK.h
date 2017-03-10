//
//  KarmiesSDK.h
//  KarmiesSDK
//
//  Created by Dustin Mallory on 10/17/16.
//  Copyright © 2016 Karmies. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double KarmiesSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char KarmiesSDKVersionString[];

// Bridge
#import "KarmiesProxyDelegate.h"
#import "NSData_Base64.h"

// AwesomeCache
#import "NSKeyedUnarchiverWrapper.h"

// AWSCore
#import "AWSCore.h"
#import "AWSCredentialsProvider.h"
#import "AWSIdentityProvider.h"
#import "AWSSignature.h"
#import "AWSBolts.h"
#import "AWSCancellationToken.h"
#import "AWSCancellationTokenRegistration.h"
#import "AWSCancellationTokenSource.h"
#import "AWSExecutor.h"
#import "AWSEXTKeyPathCoding.h"
#import "AWSEXTRuntimeExtensions.h"
#import "AWSEXTScope.h"
#import "AWSGeneric.h"
#import "AWSTask.h"
#import "AWSTaskCompletionSource.h"
#import "AWSCognitoIdentity.h"
#import "AWSCognitoIdentity+Fabric.h"
#import "AWSCognitoIdentityModel.h"
#import "AWSCognitoIdentityResources.h"
#import "AWSCognitoIdentityService.h"
#import "AWSGZIP.h"
#import "AWSKSReachability.h"
#import "AWSMantle.h"
#import "AWSMTLJSONAdapter.h"
#import "AWSMTLManagedObjectAdapter.h"
#import "AWSMTLModel+NSCoding.h"
#import "AWSMTLModel.h"
#import "AWSMTLReflection.h"
#import "AWSMTLValueTransformer.h"
#import "NSArray+AWSMTLManipulationAdditions.h"
#import "NSDictionary+AWSMTLManipulationAdditions.h"
#import "NSError+AWSMTLModelException.h"
#import "NSObject+AWSMTLComparisonAdditions.h"
#import "NSValueTransformer+AWSMTLInversionAdditions.h"
#import "NSValueTransformer+AWSMTLPredefinedTransformerAdditions.h"
#import "AWSNetworking.h"
#import "AWSURLSessionManager.h"
#import "AWSSerialization.h"
#import "AWSURLRequestRetryHandler.h"
#import "AWSURLRequestSerialization.h"
#import "AWSURLResponseSerialization.h"
#import "AWSValidation.h"
#import "AWSClientContext.h"
#import "AWSInfo.h"
#import "AWSService.h"
#import "AWSServiceEnum.h"
#import "AWSSTS.h"
#import "AWSSTSModel.h"
#import "AWSSTSResources.h"
#import "AWSSTSService.h"
#import "AWSUICKeyChainStore.h"
#import "AWSCategory.h"
#import "AWSLogging.h"
#import "AWSModel.h"
#import "AWSSynchronizedMutableDictionary.h"
#import "AWSXMLDictionary.h"
#import "AWSXMLWriter.h"

// AWSMobileAnalytics
#import "AWSMobileAnalytics.h"
#import "AWSMobileAnalyticsAppleMonetizationEventBuilder.h"
#import "AWSMobileAnalyticsConfiguration.h"
#import "AWSMobileAnalyticsEvent.h"
#import "AWSMobileAnalyticsEventClient.h"
#import "AWSMobileAnalyticsMonetizationEventBuilder.h"
#import "AWSMobileAnalyticsOptions.h"
#import "AWSMobileAnalyticsService.h"
#import "AWSMobileAnalyticsVirtualMonetizationEventBuilder.h"
#import "AWSMobileAnalyticsERSModel.h"
#import "AWSMobileAnalyticsERSResources.h"
#import "AWSMobileAnalyticsERSService.h"

// CKCircleMenuView
#import "CKCircleMenuView.h"

// FastImageCache
#import "FICEntity.h"
#import "FICImageCache.h"
#import "FICImageFormat.h"
#import "FICImageTable.h"
#import "FICImageTableChunk.h"
#import "FICImageTableEntry.h"
#import "FICUtilities.h"
