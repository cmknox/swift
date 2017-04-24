//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

typedef NS_ENUM(NSInteger, CDRemoteLauncherUriStatus) {
    CDRemoteLauncherUriStatusUnknown = 0,
    CDRemoteLauncherUriStatusSuccess,
    CDRemoteLauncherUriStatusAppUnvailable,
    CDRemoteLauncherUriStatusProtocolUnavailable,
    CDRemoteLauncherUriStatusRemoteSystemUnavailable,
    CDRemoteLauncherUriStatusBundleTooLarge,
    CDRemoteLauncherUriStatusDeniedByLocalSystem,
    CDRemoteLauncherUriStatusDeniedByRemoteSystem
};
