@interface CNUIDefaultPhotosLoader : NSObject

+ (id)os_log;
+ (id)defaultPhotoPathsFileManager:(id)a0 workspace:(id)a1;
+ (BOOL)isFileAtPathDirectory:(id)a0 workspace:(id)a1;
+ (id)contentsOfDirectoryAtPath:(id)a0 fileManager:(id)a1;

@end
