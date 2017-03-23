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

#if TARGET_OS_IOS

// Bridge
#import "KarmiesProxyDelegate.h"
#import "NSData_Base64.h"

// AwesomeCache
#import "NSKeyedUnarchiverWrapper.h"

// AWSCore
#import "AWSService.h"

// AWSMobileAnalytics
#import "AWSMobileAnalyticsService.h"

// CKCircleMenuView
#import "CKCircleMenuView.h"

#endif

// GBDeviceInfo
#import "GBDeviceInfo.h"
