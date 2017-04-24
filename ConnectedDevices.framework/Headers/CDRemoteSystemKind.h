//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import "CDCommon.h"

typedef NS_ENUM(NSInteger, CDRemoteSystemKind) {
    CDRemoteSystemKindUnknown = 0,
    CDRemoteSystemKindDesktop,
    CDRemoteSystemKindHolographic,
    CDRemoteSystemKindPhone,
    CDRemoteSystemKindXbox,
    CDRemoteSystemKindHub
};

__CD_VISIBLE_EXTERNALLY

/**
 * @brief Returns string representation for a Remote System Kind.
 * @param CDRemoteSystemKind The kind.
 * @returns String representation.
 */
NSString* CDRemoteSystemFriendlyNameForKind(CDRemoteSystemKind type);