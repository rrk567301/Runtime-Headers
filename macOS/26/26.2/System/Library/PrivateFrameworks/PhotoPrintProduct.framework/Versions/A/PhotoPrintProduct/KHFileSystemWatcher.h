@class NSPointerArray, NSMutableArray;
@protocol KHFileSystemWatcherDelegate;

@interface KHFileSystemWatcher : NSObject {
    NSMutableArray *_fileSystemPathsToWatch;
    NSPointerArray *_fsEventSources;
    BOOL _bulkReload;
}

@property (nonatomic) id<KHFileSystemWatcherDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyDelegateOfChangesInPath:(id)a0;
- (void)_tearDownStream;
- (void)_resetFileSystemEventsStream;
- (id)initWithArrayOfURLs:(id)a0;
- (void)startWatchingPath:(id)a0;
- (void)stopWatchingAllPaths;
- (void)stopWatchingPath:(id)a0;

@end
