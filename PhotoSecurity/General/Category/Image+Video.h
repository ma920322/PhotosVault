//
//  Image+Video.h
//  
//
//  Created by nhope on 2017/4/12.
//  Copyright © 2017年 xiaopin. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE || TARGET_OS_TV
    #import <UIKit/UIKit.h>
    #define XP_IMAGE UIImage
#elif TARGET_OS_MAC
    #import <AppKit/AppKit.h>
    #define XP_IMAGE NSImage
#endif



@interface XP_IMAGE (Video)

/**
 从视频文件中提取缩略图

 @param videoURL 本地视频文件URL
 @return 视频缩略图
 */
+ (instancetype)snapshotImageWithVideoURL:(NSURL *)videoURL;

@end
