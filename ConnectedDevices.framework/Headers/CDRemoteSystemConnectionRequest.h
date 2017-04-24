//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystem.h"
#import "CDRemoteSystemDiscoveryManagerDelegate.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used to express a connection request intent against a Remote System.
 */
@interface CDRemoteSystemConnectionRequest : NSObject

-(nullable instancetype)init __attribute__((unavailable("init not available. Use initWithRemoteSystem.")));

/**
 * @brief Initializes the Connection Request with a Remote System.
 * @param remoteSystem The Remote System.
 */
-(nullable instancetype)initWithRemoteSystem:(nonnull CDRemoteSystem*)remoteSystem;

/**
 * @brief The Remote System the class was initialized with.
 */
@property (nonatomic, readonly, strong, nonnull)CDRemoteSystem* remoteSystem;

@end
