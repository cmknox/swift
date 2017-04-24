//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystemDiscoveryType.h"
#import "CDRemoteSystemFilter.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used to filter discovery based upon discovery type.
 */
@interface CDRemoteSystemDiscoveryTypeFilter : NSObject<CDRemoteSystemFilter>

-(nullable instancetype)init __attribute__((unavailable("init not available. Please use initWithKind.")));

/**
 * @brief Initializes the filter with a discovery type.
 * @param initType The discovery type.
 * @returns The initialized filter, otherwise nil.
 */
-(nullable instancetype)initWithType:(CDRemoteSystemDiscoveryType)initType;

/**
 * @brief The type.
 */
@property (nonatomic, readonly)CDRemoteSystemDiscoveryType type;

@end
