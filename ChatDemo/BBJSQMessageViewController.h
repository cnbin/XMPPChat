//
//  DemoMessageViewController.h
//  HXXMPPdemo
//
//  Created by Apple on 9/2/15.
//  Copyright (c) 2015 华讯网络投资有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JSQMessages.h"
#import <AVFoundation/AVFoundation.h>
#import "BBModelData.h"
#import "BBXMPPTool.h"
#import "BBMessageDelegate.h"
@interface BBJSQMessageViewController : JSQMessagesViewController <UIActionSheetDelegate, JSQMessagesComposerTextViewPasteDelegate>

@property (strong, nonatomic) BBModelData *demoData;

@property (nonatomic, strong) XMPPJID *chatJID;

/** 聊天记录*/
@property (nonatomic, strong) NSMutableArray *chatHistory;

@end
