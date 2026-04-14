@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (BOOL)isQueueCurrent;
- (id)queue;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)assertQueueIsNotCurrent;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (BOOL)assertQueueIsCurrent;

@end
