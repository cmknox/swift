//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import "CDCommon.h"
#import "CDOAuthCodeProviderDelegate.h"

__CD_VISIBLE_EXTERNALLY

/**
 * @brief A static class to perform global scale commands to the Rome Platform.
 */
@interface CDPlatform : NSObject

/**
 * @brief Asynchronously initializes the Rome Platform. 
 * This must be called with a successful completion before other parts of the framework can be invoked.
 * @delegate The delegate.
 * @completion Callback invoked when the platform has attempted initialization. Sucessfull when error is nil.
 */
+(void)startWithOAuthCodeProviderDelegate:(id<CDOAuthCodeProviderDelegate>)delegate completion:(void (^)(NSError* error))completion;

/**
 * @brief Suspends the Rome Platform. 
 * This should be called when your app is sent to the background.
 */
+(void)suspend;

/**
 * @brief Resumes the Rome platform. 
 * This should be called when your app enters the foreground.
 */
+(void)resume;

/**
 * @brief Shutdowns the Rome Platform.
 * This should be called when your app is exiting or you want to forcefully stop the platform.
 */
+(void)shutdown;


@end
