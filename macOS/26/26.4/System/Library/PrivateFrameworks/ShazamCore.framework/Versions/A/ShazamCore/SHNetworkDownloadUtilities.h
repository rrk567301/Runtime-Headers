@interface SHNetworkDownloadUtilities : NSObject

+ (id)downloadDirectory;
+ (id)cachedFileURLWithFilename:(id)a0 type:(id)a1;
+ (id)renameDownloadedFile:(id)a0 withFilename:(id)a1 usingType:(id)a2 error:(id *)a3;

@end
