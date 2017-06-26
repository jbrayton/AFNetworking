//
//  AFNetworkingCarthage.h
//  AFNetworkingCarthage
//
//  Created by John Brayton on 6/26/17.
//  Copyright © 2017 John Brayton. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for AFNetworkingCarthage.
FOUNDATION_EXPORT double AFNetworkingCarthageVersionNumber;

//! Project version string for AFNetworkingCarthage.
FOUNDATION_EXPORT const unsigned char AFNetworkingCarthageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AFNetworkingCarthage/PublicHeader.h>


#ifndef _AFNETWORKINGCARTHAGE_
#define _AFNETWORKINGCARTHAGE_


#import "AFURLConnectionOperation.h"

#import "AFHTTPRequestOperation.h"
#import "AFJSONRequestOperation.h"
#import "AFXMLRequestOperation.h"
#import "AFPropertyListRequestOperation.h"
#import "AFHTTPClient.h"

#import "AFImageRequestOperation.h"

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
#import "AFNetworkActivityIndicatorManager.h"
#import "UIImageView+AFNetworking.h"
#endif
#endif /* _AFNETWORKING_ */
