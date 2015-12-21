//
//  LocalImageHelper.h
//  JZH_Test
//  图片相关方法类
//  Created by Points on 13-10-24.
//  Copyright (c) 2013年 Points. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseViewController.h"

@interface UIImage(InternalMethod)

- (UIImage*)imageRotatedByDegrees:(CGFloat)degrees;

@end

@interface LocalImageHelper : NSObject

//创建存放资源的文件夹
+(void)createUploadFileInDocument;

//根据分辨率剪切image
+ (UIImage*)imageWithImageSimple:(UIImage*)image scaledToSize:(CGSize)newSize;

//将图片保存至给定的路径
+ (NSString *)saveImage:(UIImage *)tempImage;

//保存音频文件
+ (BOOL)saveAudioFileWithFileData:(NSData *)data withPath:(NSString *)filePath;

//获取当前程序图片的存放路径
+ (NSString *)getStoredFilePath:(BOOL)isPic;

//根据路径获取图片
+ (UIImage *)getImageWithPath : (NSString *)filePath;

//根据当前时间,处理下作为图片名
+ (NSString *)getPicNameFromCurrentTime;

//同上
+ (NSString *)getAudioNameFromCurrentTime;


#pragma mark - 空间大小
//获取文件夹的大小(缓存大小)
+ (float)lengthOfSavedPictureFileData:(BOOL)isPic;

//磁盘剩余大小 G为单位
+ (NSString *)freeDiskSpaceInGB;

//磁盘总大小
+ (NSString *)totalDiskSpaceInGB;

//清空本地保存的文件(包括上传和下载的图片以及音频文件)
+ (void)clearSavedFile;

+ (BOOL)deleteCurrentFile:(NSString *)path;

//从相册选择图片的公用函数
+ (void)selectPhotoFromLibray:(UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate> * )pointer;

//拍照获取图片的公用函数 
+ (void)selectPhotoFromCamera:(UIViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate> *)pointer;
@end
