@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

- (id)initWithCacheDirPath:(id)a0;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (void)_purge;
- (void)suspend;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)a0;
- (void)dealloc;

@end
