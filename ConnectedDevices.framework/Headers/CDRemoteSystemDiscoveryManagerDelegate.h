//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystem.h"

@class CDRemoteSystemDiscoveryManager;

__CD_VISIBLE_EXTERNALLY

/**
 * @brief Set of methods to be implemented to receive events from the Remote System Discovery Manager.
 */
@protocol CDRemoteSystemDiscoveryManagerDelegate <NSObject>

/**
 * @brief Called when a Remote System has been discovered.
 * @remarks Optional
 * @param discoveryManager The delegating Remote System Discovery Manager.
 * @param remoteSystem The discovered Remote System.
 */
@optional
-(void)remoteSystemDiscoveryManager:(nonnull CDRemoteSystemDiscoveryManager*)discoveryManager didFind:(nonnull CDRemoteSystem*)remoteSystem;

/**
 * @brief Called when a previously discovered Remote System has been removed.
 * @remarks Optional
 * @param discoveryManager The delegating Remote System Discovery Manager.
 * @param remoteSystem The Remote System which was undiscovered. 
 */
@optional
-(void)remoteSystemDiscoveryManager:(nonnull CDRemoteSystemDiscoveryManager*)discoveryManager didRemove:(nonnull CDRemoteSystem*)remoteSystem;

/**
 * @brief Called when a previously discovered Remote System has been updated with more information.
 * For example, the device may be discovered first proximally and then over the cloud.
 * @remarks Optional
 * @param discoveryManager The delegating Remote System Discovery Manager.
 * @param remoteSystem The discovered Remote System.
 * The instance returned should be considered distinct than the instance previously returned through didFind.
 */
@optional
-(void)remoteSystemDiscoveryManager:(nonnull CDRemoteSystemDiscoveryManager*)discoveryManager didUpdate:(nonnull CDRemoteSystem*)remoteSystem;

/**
 * @brief Called when the discovery operation has completed.
 * @param discoveryManager The delegating Remote System Discovery Manager.
 * @param error Nil on success, otherwise an error indicating why discovery failed.
 */
@optional
-(void)remoteSystemDiscoveryManagerDidComplete:(nonnull CDRemoteSystemDiscoveryManager*)discoveryManager withError:(nullable NSError*)error;

@end
