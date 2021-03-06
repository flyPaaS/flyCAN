//
//  HttpRequestEngine.h
//  KCT_VOIP_Demo
//
//  Created by KCMac on 2017/1/7.
//  Copyright © 2017年 KCMac. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^requestSuccessBlock)(NSDictionary *responseDict);
typedef void(^requestFailBlock)(NSDictionary *responseDict);
typedef void(^loginStateBlock)(NSDictionary *responseDict);


@interface HttpRequestEngine : NSObject

+(id)engineInstance;
- (void)applySDKID:(NSString *)sid appid:(NSString *)appid token:(NSString *)token successBlock:(requestSuccessBlock)successBlockT failBlock:(requestFailBlock)failBlockT;

@end
