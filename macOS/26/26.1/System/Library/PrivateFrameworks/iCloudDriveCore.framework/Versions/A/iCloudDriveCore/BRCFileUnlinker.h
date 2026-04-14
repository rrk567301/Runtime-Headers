@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

- (void)resume;
- (void)suspend;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (void)_purge;
- (id)initWithCacheDirPath:(id)a0;

@end
