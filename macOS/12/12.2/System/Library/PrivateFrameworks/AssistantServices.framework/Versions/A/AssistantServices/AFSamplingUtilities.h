@interface AFSamplingUtilities : NSObject

+ (id)component;
+ (id)timezone;
+ (id)sampledSubDirectoryPath;
+ (id)sampledLibraryDirectoryPath;
+ (id)sampledCachesSubDirectoryPath;
+ (id)deleteItemAtFilePath:(id)a0;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledCurrentSamplingDateKey;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)samplingDateAsString;

@end
