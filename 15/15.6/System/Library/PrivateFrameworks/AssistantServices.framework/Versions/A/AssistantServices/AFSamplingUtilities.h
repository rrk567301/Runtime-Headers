@interface AFSamplingUtilities : NSObject

+ (id)component;
+ (id)dateFormatter;
+ (id)timezone;
+ (long long)calculateFileNameAgeInDays:(id)a0;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)deleteItemAtFilePath:(id)a0;
+ (char)fileExistsAndNotEmpty:(id)a0 samplingComponent:(id)a1;
+ (char)isFileNameValid:(id)a0;
+ (char)isFileOlderThanAgeInSeconds:(double)a0 filePath:(id)a1 samplingComponent:(id)a2;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledSubDirectoryPath;
+ (id)samplingDateAsString;

@end
