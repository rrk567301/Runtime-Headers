@class NSObject;
@protocol TRITaskQueuing, OS_dispatch_queue, OS_dispatch_source;

@interface TRIEagerExitManager : NSObject {
    NSObject<OS_dispatch_queue> *_eagerExitQueue;
    NSObject<OS_dispatch_source> *_eagerExitSource;
    int _token;
}

@property (weak, nonatomic) id<TRITaskQueuing> taskQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)exitTrialdCleanly;
- (void)handleTaskQueueEmptyNotificationWithCooldown:(double)a0;
- (id)initWithExitCooldown:(double)a0 monitoringTaskQueue:(id)a1;

@end
