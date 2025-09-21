@class SMPathSizer, NSString, NSDictionary, NSURL, NSMutableSet;

@interface SMLocalDiskPathEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>

@property (nonatomic) struct __CFURLEnumerator { } *pathEnumerator;
@property (nonatomic) struct __CFURLEnumerator { } *subPathEnumerator;
@property char subPathHasBeenRead;
@property char postOrder;
@property (retain) NSURL *currentURL;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;
@property (retain) NSString *basePath;
@property (retain) NSURL *basePathURL;
@property (retain) NSString *alternateBasePath;
@property (retain) NSURL *alternateBasePathURL;
@property char systemVolume;
@property (retain) NSDictionary *firmlinks;
@property (retain, nonatomic) SMPathSizer *sizer;
@property (readonly) char supportsFastEnumeration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)nextObject;
- (void)skipDescendants;
- (id)initWithDirectory:(id)a0;
- (char)hasNext;
- (id)bundleInfoAtCurrentPath;
- (void)continueEnumerationFromPath:(id)a0;
- (long long)getNextURL:(const struct __CFURL **)a0 withError:(struct __CFError **)a1;
- (char)isCurrentPathABundle;
- (char)isCurrentPathADirectory;
- (char)isCurrentPathAPlatformBinary;
- (char)isCurrentPathARegularDirectory;
- (char)isCurrentPathARegularFile;
- (char)isPostorderDirectory;
- (char)isPreorderDirectory;
- (void)loadFirmlinksFromSystemVolume:(id)a0 andDataVolume:(id)a1;
- (id)skipDescendantsReturningStats;
- (id)statsForCurrentPath;

@end
