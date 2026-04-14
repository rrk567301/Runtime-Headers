@interface AFSamplingUtilities : NSObject

+ (id)component;
+ (id)timezone;
+ (id)sampledSubDirectoryPath;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)createSamplingDirectory;
+ (id)deleteItemAtFilePath:(id)a0;
+ (void)deleteAllSamplingData;
+ (id)samplingDateAsString;

@end
