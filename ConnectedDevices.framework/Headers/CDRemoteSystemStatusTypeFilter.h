//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystemStatusType.h"
#import "CDRemoteSystemFilter.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used which represents a filter based upon status type.
 */
@interface CDRemoteSystemStatusTypeFilter : NSObject<CDRemoteSystemFilter>

-(nullable instancetype)init __attribute__((unavailable("init not available. Please use initWithStatusType.")));

/**
 * @brief Initializes the filter with a status type.
 * @pargm statusType The desired status type.
 * @returns The initialized filter, otherwise nil.
 */
-(nullable instancetype)initWithStatusType:(CDRemoteSystemStatusType)statusType;

/**
 * @brief The status type.
 */
@property (nonatomic, readonly)CDRemoteSystemStatusType type;

@end
