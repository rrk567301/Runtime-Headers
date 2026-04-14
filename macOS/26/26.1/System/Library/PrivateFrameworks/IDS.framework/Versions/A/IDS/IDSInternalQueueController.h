@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (void)performBlock:(id /* block */)a0;
- (id)queue;
- (id)initWithQueue:(id)a0;
- (BOOL)isQueueCurrent;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (BOOL)assertQueueIsCurrent;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)assertQueueIsNotCurrent;
- (id)init;

@end
