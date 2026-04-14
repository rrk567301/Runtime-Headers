@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
    NSError *_internalDaemonContainerError;
}

- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)a0;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (void)suspend;
- (void).cxx_destruct;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (id)init;
- (void)resumeWithTapToRadarManager:(id)a0;
- (void)_purge;
- (void)_moveOldUnlinkDir;
- (void)dealloc;

@end
