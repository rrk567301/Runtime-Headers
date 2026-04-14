@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLCallObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int x0; } *_lock;
    NSDate *_startDate;
    Class _aClass;
    SEL _selector;
    BOOL _objectIsClass;
}

+ (void)observeAsyncCallOn:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
+ (void)observeSyncCallOn:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (void)callDidFinish;
- (id)initWithObject:(id)a0 selector:(SEL)a1;

@end
