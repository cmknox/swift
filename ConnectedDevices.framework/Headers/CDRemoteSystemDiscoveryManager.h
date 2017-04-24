//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystem.h"
#import "CDRemoteSystemDiscoveryManagerDelegate.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used to find Remote Systems.
 */
@interface CDRemoteSystemDiscoveryManager : NSObject

/**
 * @brief The delegate which will receive discovery events from this manager.
 */
@property (nonatomic, readonly, weak, nullable)id<CDRemoteSystemDiscoveryManagerDelegate> delegate;

/**
 * @brief Initializes the instance with the callback delegate.
 * @param delegate The delegate.
 * @returns This instance. Nil on failure.
 */
-(nullable instancetype)initWithDelegate:(nonnull id<CDRemoteSystemDiscoveryManagerDelegate>)delegate;

/**
 * @brief Initializes the instance with the callback delegate and a set of Remote System Discovery Filters.
 * @param delegate The delegate.
 * @param filters The set of filters.
 * @returns This instance. Nil on failure.
 */
-(nullable instancetype)initWithDelegate:(nonnull id<CDRemoteSystemDiscoveryManagerDelegate>)delegate withFilters:(nonnull NSSet*)filters;

/**
 * @brief Starts the discovery of Remote Systems.
 * @returns Nil on success, otherwise an error describing why the discovery could not be started.
 */
-(nullable NSError*)startDiscovery;

/**
 * @brief Starts the discovery of Remote Systems.
 *
 * !! THIS API IS NOT YET IMPLEMENTED !!
 * You can only discover right now with an IP v4 address.

 * @returns Nil on success, otherwise an error describing why the discovery could not be started.
 */
-(nullable NSError*)startDiscoveryWithHostName:(nonnull NSString*)hostname;

/**
 * @brief Stops the discovery. No-op if already dropped.
 * @returns Nil on success, otherwise an error describing why the discovery could not be stopped.
 */
-(nullable NSError*)stopDiscovery;

@end
