@class NSURL, NSArray;

@interface SMIncompatibleAppFolderData : NSObject

@property (retain) NSURL *filePath;
@property (retain) NSArray *appFolderData;

+ (id)localizedStringForKey:(id)a0;
+ (id)appFolderDataFilePathWithIncompatibleAppFolder:(id)a0;

- (unsigned long long)itemCount;
- (void).cxx_destruct;
- (BOOL)flushToDisk;
- (id)initWithFolderPath:(id)a0;
- (BOOL)removeDataFile;

@end
