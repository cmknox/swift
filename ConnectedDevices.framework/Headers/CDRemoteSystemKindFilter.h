//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystemKind.h"
#import "CDRemoteSystemFilter.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used to filter discovery based upon Remote System kinds.
 */
@interface CDRemoteSystemKindFilter : NSObject<CDRemoteSystemFilter>

/**
 * @brief Initializes the filter with an array of kinds to match for.
 * @param kinds The array of kinds.
 * @returns The initialized filter, otherwise nil.
 */
-(nullable instancetype)initWithKindsArray:(nonnull NSArray*)kinds;

@end
