//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDCommon.h"
#import "CDRemoteSystemConnectionRequest.h"
#import "CDRemoteSystemDiscoveryManagerDelegate.h"
#import "CDRemoteLauncherUriStatus.h"
#import "CDRemoteLauncherOptions.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A class used to launch URIs on Remote Systems.
 */
@interface CDRemoteLauncher : NSObject

-(nullable instancetype) init __attribute__((unavailable("init not available.")));

/**
 * @brief Launches a URI against the Remote System specified in the Connection Request.
 * @param uri The URI to launch.
 * @param request The Connection Request.
 * @param completion The callback invoked when the request suceeds or fails.
 * @returns Non-nil error on failure preparing the asynchronous request.
 */
+(nullable NSError*)launchUri:(nonnull NSString*)uri withRequest:(nonnull CDRemoteSystemConnectionRequest*)request 
                                            withCompletion:(nullable void (^)(CDRemoteLauncherUriStatus))completion;

/**
 * @brief Launches a URI with options against the Remote System specified in the Connection Request
 *
 * !! THIS API IS NOT YET IMPLEMENTED !!
 *
 * @param options The launcher options.
 * @param withCompletion The block to invoke when the async request either succeeds or fails.
 * @returns The initialized CDRemoteLauncher, otherwise nil.
 */
+(nullable NSError*)launchUri:(nonnull NSString*)uri withRequest:(nonnull CDRemoteSystemConnectionRequest*)request 
                                            withOptions:(nonnull CDRemoteLauncherOptions*)options 
                                            withCompletion:(nonnull void (^)(CDRemoteLauncherUriStatus))completion;

@end
