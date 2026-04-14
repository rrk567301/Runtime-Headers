@interface BCSPathProvider : NSObject

+ (id)cachesPath;
+ (id)documentsPath;
+ (id)_createBundleBasedDirectoryIfNecessary:(id)a0;
+ (id)tempPath;

@end
