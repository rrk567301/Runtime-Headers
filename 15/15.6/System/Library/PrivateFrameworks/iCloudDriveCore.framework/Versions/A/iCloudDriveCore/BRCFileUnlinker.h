@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)_purge;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (id)initWithCacheDirPath:(id)a0;
- (char)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (char)renameAndUnlinkInBackgroundItemAtPath:(id)a0;

@end
