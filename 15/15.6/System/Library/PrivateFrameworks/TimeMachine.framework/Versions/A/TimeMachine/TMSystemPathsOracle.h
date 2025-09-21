@class NSURL, NSLock, TMPathTreeNode;
@protocol TMSystemPathsProvider;

@interface TMSystemPathsOracle : NSObject {
    NSURL *_mountPointURL;
    NSLock *_discoveryLock;
    TMPathTreeNode *_systemPathsTreeRoot;
}

@property (retain) id<TMSystemPathsProvider> pathsProvider;

+ (id)_knownSystemInstalledBundleExtensions;

- (void).cxx_destruct;
- (char)discoverSystemPaths:(id /* block */)a0;
- (char)discoverSystemPathsWithOptions:(unsigned int)a0 cancelBlock:(id /* block */)a1;
- (void)enumeratePathsUsingBlock:(id /* block */)a0;
- (void)enumeratePathsWithOptions:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (id)initForVolumeAtURL:(id)a0;

@end
