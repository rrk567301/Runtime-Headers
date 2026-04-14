@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

+ (id)sharedManager;
+ (id)baseDirectoryURL;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)a0 filename:(id)a1;
+ (Class)managedTemporaryDirectoryClass;

- (void).cxx_destruct;
- (id)init;
- (void)_clearDirectories:(id)a0;
- (id)_readDirectories;
- (id)newDirectoryWithFilename:(id)a0;

@end
