@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

+ (id)sharedManager;
+ (id)baseDirectoryURL;
+ (Class)managedTemporaryDirectoryClass;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)a0 filename:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_readDirectories;
- (void)_clearDirectories:(id)a0;
- (id)newDirectoryWithFilename:(id)a0;

@end
