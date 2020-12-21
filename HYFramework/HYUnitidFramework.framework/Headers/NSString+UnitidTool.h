//
//  NSString+UnitidTool.h
//  LiveDetectionSDKFrame
//
//  Created by 张鹤 on 2020/7/25.
//  Copyright © 2020 张鹤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface NSString (UnitidTool)

+ (NSString *)hexStringFromString:(NSString *)string;

+ (NSString *)sha256ToStringWithString:(NSString *)string;

+ (NSData *)sha256ToDataWithString:(NSString *)string;

+ (NSData *)sha256ToDataWithData:(NSData *)data;

+ (NSString *)sha256ToStringWithData:(NSData *)data;


+ (NSString *)calculateMDValueWithToken:(NSString *)token andImage:(UIImage *)image;

+ (BOOL)vaildToken:(NSString *)token;

+ (NSString*)getCurrentTimes;

@end

NS_ASSUME_NONNULL_END
