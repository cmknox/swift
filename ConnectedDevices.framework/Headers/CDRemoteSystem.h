//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystemStatus.h"
#import "CDRemoteSystemKind.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class to represent a Remote System.
 */
@interface CDRemoteSystem : NSObject

-(nullable instancetype)init __attribute__((unavailable("init not available. A CDRemoteSystem can only be created by the framework internally.")));

/**
 * @brief The identifier for this Remote System.
 */
@property (nonatomic, readonly, copy, nonnull) NSString* id;

/**
 * @brief The friendly display name of this Remote System.
 */
@property (nonatomic, readonly, copy, nonnull) NSString* displayName;

/**
 * @brief The kind of this Remote System.
 */
@property (nonatomic, readonly) CDRemoteSystemKind kind;

/**
 * @brief Whether the RemoteSystem can be connected over proximally (UDP or Bluetooth)
 */
@property (nonatomic, readonly) BOOL isAvailableByProximity;

/**
 * @brief The availablity of this Remote System.
 */
@property (nonatomic, readonly) CDRemoteSystemStatus status;

@end
