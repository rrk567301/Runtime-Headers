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

- (id)initWithFileURL:(id)a0 name:(id)a1 ownerIdentifier:(id)a2 delegate:(id)a3 queue:(id)a4;
- (id)_redactedPath;
- (void)_stopWatchingParent;
- (void)_updateWatchingNode;
- (void)_forceRefreshWatchingNode;
- (void)_stopWatchingNode;
- (void)_startWatchingParent;
- (void).cxx_destruct;
- (void)stopWatching;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)description;
- (id)redactedDescription;
- (void)_startWatchingNode;
- (void)startWatching;

@end
