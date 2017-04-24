//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

/** @brief The status of a Remote System. */
typedef NS_ENUM(NSInteger, CDRemoteSystemStatus) {
    /** @brief The status of the Remote System is unknown. */
    CDRemoteSystemStatusUnknown = 0,
    /** @brief The status of the Remote System is still being determined. */
    CDRemoteSystemStatusDiscoveringAvailability,
    /** @brief The Remote System is reported as being available. */
    CDRemoteSystemStatusAvailable,
    /** @brief The Remote System is reported as being unavailable. */
    CDRemoteSystemStatusUnavailable
};
