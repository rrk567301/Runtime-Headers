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
@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate;

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (void)startWatching;
- (void)stopWatching;
- (id)initWithFileURL:(id)a0 name:(id)a1 delegate:(id)a2 queue:(id)a3;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingNode;
- (void)_stopWatchingNode;
- (void)_updateWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingParent;

@end
