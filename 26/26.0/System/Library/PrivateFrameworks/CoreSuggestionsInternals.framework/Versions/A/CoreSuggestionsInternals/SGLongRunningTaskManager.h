@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)task;
- (void)unregister:(id)a0;
- (void).cxx_destruct;
- (id)taskWithDeadline:(double)a0;
- (void)tellCurrentTasksToDefer;

@end
