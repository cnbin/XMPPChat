//
//  KKMessageDelegate.h
//  ChatDemo
//
//  Created by Apple on 9/6/15.
//  Copyright (c) 2015 Mac. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol BBMessageDelegate <NSObject>

-(void)newMessageReceived:(id)messageContent;

@end
