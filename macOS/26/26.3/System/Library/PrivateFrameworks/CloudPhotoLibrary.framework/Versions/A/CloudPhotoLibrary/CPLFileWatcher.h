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

- (void)_stopWatchingParent;
- (id)description;
- (void)stopWatching;
- (void)_startWatchingNode;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)_updateWatchingNode;
- (id)redactedDescription;
- (void)_startWatchingParent;
- (void)startWatching;
- (void)_forceRefreshWatchingNode;
- (id)initWithFileURL:(id)a0 name:(id)a1 ownerIdentifier:(id)a2 delegate:(id)a3 queue:(id)a4;
- (id)_redactedPath;
- (void)_stopWatchingNode;

@end
