//
//  DemoModelData.h
//  HXXMPPdemo
//
//  Created by Apple on 9/2/15.
//  Copyright (c) 2015 华讯网络投资有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "JSQMessages.h"

static NSString * const kJSQDemoAvatarDisplayNameSquires = @"cnbin";
static NSString * const kJSQDemoAvatarIdSquires = @"053496-4509-289";

@interface BBModelData : NSObject

@property (strong, nonatomic) NSMutableArray *messages;

@property (strong, nonatomic) NSDictionary *avatars;

@property (strong, nonatomic) JSQMessagesBubbleImage *outgoingBubbleImageData;

@property (strong, nonatomic) JSQMessagesBubbleImage *incomingBubbleImageData;

@property (strong, nonatomic) NSDictionary *users;

@end
