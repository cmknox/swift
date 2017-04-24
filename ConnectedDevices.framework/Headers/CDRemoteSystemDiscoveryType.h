//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

typedef NS_ENUM(NSInteger, CDRemoteSystemDiscoveryType) {
	/** @brief The Remote System should be available over the cloud. */
    CDRemoteSystemDiscoveryTypeCloud = 1,
    /** @brief The Remote System should be available proximally. */
    CDRemoteSystemDiscoveryTypeProximal = 1 << 1,
    /** @brief The Remote System should be available over any transport. */
    CDRemoteSystemDiscoveryTypeAny = 0xFFFF,
};
