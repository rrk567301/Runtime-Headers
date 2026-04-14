@class NSSet, NSDictionary, NSURL, SMNPathingAction, NSDate;
@protocol SMNRemoteProxy;

@interface SMNetworkDirectoryEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>

@property (retain) id<SMNRemoteProxy> remoteProxy;
@property (retain) NSURL *startingPath;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSDictionary *currentFileInfo;
@property BOOL skipNext;
@property BOOL doneEnumerating;
@property unsigned long long currentEntryType;
@property (retain) NSDictionary *lastSuccessfulEvent;
@property (retain) SMNPathingAction *pathingAction;
@property (retain) NSDate *enumerationStartDate;
@property double timeElapsedEnumerating;
@property BOOL autoSizeBundles;
@property BOOL autoDetectBundles;
@property (readonly) BOOL supportsFastEnumeration;

- (id)nextObject;
- (void).cxx_destruct;
- (void)skipDescendants;
- (BOOL)hasNext;
- (id)nextEvent;
- (BOOL)isCurrentPathADirectory;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathAPlatformBinary;
- (BOOL)isCurrentPathARegularFile;
- (id)bundleInfoAtCurrentPath;
- (unsigned long long)skipDescendantsReturningSizeAndCount:(unsigned long long *)a0;
- (unsigned long long)filesystemSizeOfCurrentPath;
- (BOOL)isPreorderDirectory;
- (BOOL)isPostorderDirectory;
- (id)initWithRemoteProxy:(id)a0 startingPath:(id)a1 andDontDescendPaths:(id)a2;
- (void)logEnumerationSummary;
- (BOOL)isCurrentPathAHardLink;
- (BOOL)isCurrentPathAClone;

@end
