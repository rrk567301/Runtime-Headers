@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (char)assertQueueIsCurrent;
- (char)assertQueueIsNotCurrent;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (char)isQueueCurrent;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(char)a1;

@end
