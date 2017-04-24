//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class to represent options passed when launching a URI against a Remote System.
 */
@interface CDRemoteLauncherOptions : NSObject

/**
 * @brief The fallback uri.
 */
@property (nonatomic, readonly, copy, nullable) NSString* fallbackUri;

/**
 * @brief The app ids.
 */
@property (nonatomic, readonly, copy, nullable) NSArray* preferredAppIds;

@end
