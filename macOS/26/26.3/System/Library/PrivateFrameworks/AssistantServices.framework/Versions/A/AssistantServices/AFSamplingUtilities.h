@interface AFSamplingUtilities : NSObject

+ (id)dateFormatter;
+ (id)timezone;
+ (id)component;
+ (long long)calculateFileNameAgeInDays:(id)a0;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)deleteItemAtFilePath:(id)a0;
+ (BOOL)deleteItemAtFilePath:(id)a0 error:(id *)a1;
+ (BOOL)fileExistsAndNotEmpty:(id)a0 samplingComponent:(id)a1;
+ (BOOL)isFileNameValid:(id)a0;
+ (BOOL)isFileOlderThanAgeInSeconds:(double)a0 filePath:(id)a1 samplingComponent:(id)a2;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledSubDirectoryPath;
+ (id)samplingDateAsString;

@end
