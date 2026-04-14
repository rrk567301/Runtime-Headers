@class SMPathSizer, NSString, NSDictionary, NSURL, NSMutableSet;

@interface SMLocalDiskPathEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>

@property (nonatomic) struct __CFURLEnumerator { } *pathEnumerator;
@property (nonatomic) struct __CFURLEnumerator { } *subPathEnumerator;
@property BOOL subPathHasBeenRead;
@property BOOL postOrder;
@property (retain) NSURL *currentURL;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSString *basePath;
@property (retain) NSURL *basePathURL;
@property (retain) NSString *alternateBasePath;
@property (retain) NSURL *alternateBasePathURL;
@property BOOL systemVolume;
@property (retain) NSDictionary *firmlinks;
@property (retain, nonatomic) SMPathSizer *sizer;
@property (readonly) BOOL supportsFastEnumeration;
@property BOOL useTrueOnDiskSizes;

- (void)dealloc;
- (id)nextObject;
- (void).cxx_destruct;
- (void)skipDescendants;
- (id)initWithDirectory:(id)a0;
- (BOOL)hasNext;
- (BOOL)isCurrentPathADirectory;
- (BOOL)isPostorderDirectory;
- (unsigned long long)filesystemSizeOfCurrentPath;
- (BOOL)isPreorderDirectory;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathAPlatformBinary;
- (BOOL)isCurrentPathARegularFile;
- (id)bundleInfoAtCurrentPath;
- (unsigned long long)skipDescendantsReturningSizeAndCount:(unsigned long long *)a0;
- (void)loadFirmlinksFromSystemVolume:(id)a0 andDataVolume:(id)a1;
- (void)continueEnumerationFromPath:(id)a0;
- (long long)getNextURL:(const struct __CFURL **)a0 withError:(struct __CFError **)a1;

@end
