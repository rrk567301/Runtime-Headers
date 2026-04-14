@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, CPLFileWatcherDelegate, OS_dispatch_source;

@interface CPLFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ownerIdentifier;
@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate;

- (id)redactedDescription;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)_updateWatchingNode;
- (id)initWithFileURL:(id)a0 name:(id)a1 ownerIdentifier:(id)a2 delegate:(id)a3 queue:(id)a4;
- (void)_startWatchingParent;
- (void)_forceRefreshWatchingNode;
- (void).cxx_destruct;
- (void)_stopWatchingParent;
- (void)stopWatching;
- (void)_startWatchingNode;
- (id)_redactedPath;
- (id)description;
- (void)_stopWatchingNode;
- (void)startWatching;

@end
