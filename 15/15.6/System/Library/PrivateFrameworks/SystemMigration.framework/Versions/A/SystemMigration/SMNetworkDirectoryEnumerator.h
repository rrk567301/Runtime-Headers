@class NSSet, NSDictionary, NSURL, SMNPathingAction, NSDate;
@protocol SMNRemoteProxy;

@interface SMNetworkDirectoryEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol> {
    char _supportsLogicalSizing;
}

@property (retain) id<SMNRemoteProxy> remoteProxy;
@property (retain) NSURL *startingPath;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSDictionary *currentFileInfo;
@property char skipNext;
@property char doneEnumerating;
@property unsigned long long currentEntryType;
@property (retain) NSDictionary *lastSuccessfulEvent;
@property (retain) SMNPathingAction *pathingAction;
@property (retain) NSDate *enumerationStartDate;
@property double timeElapsedEnumerating;
@property char autoSizeBundles;
@property char autoDetectBundles;
@property (readonly) char supportsFastEnumeration;

- (void).cxx_destruct;
- (id)nextObject;
- (void)skipDescendants;
- (char)hasNext;
- (id)nextEvent;
- (id)bundleInfoAtCurrentPath;
- (id)initWithRemoteProxy:(id)a0 startingPath:(id)a1 andDontDescendPaths:(id)a2;
- (char)isCurrentPathABundle;
- (char)isCurrentPathAClone;
- (char)isCurrentPathADirectory;
- (char)isCurrentPathAHardLink;
- (char)isCurrentPathAPlatformBinary;
- (char)isCurrentPathARegularDirectory;
- (char)isCurrentPathARegularFile;
- (char)isPostorderDirectory;
- (char)isPreorderDirectory;
- (void)logEnumerationSummary;
- (id)skipDescendantsReturningStats;
- (id)statsForCurrentPath;

@end
