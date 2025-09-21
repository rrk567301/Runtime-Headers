@class HKObserverSet, HDFastPassBackgroundTask, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDPostInstallUpdateManager : NSObject {
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    HKObserverSet *_observers;
    HDFastPassBackgroundTask *_fastPassTask;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (void)start;
- (id)initWithDaemon:(id)a0;
- (void)_postInstallUpdateHandlerDidFire:(id)a0 completion:(id /* block */)a1;
- (void)registerUpdateTaskHandler:(id)a0 queue:(id)a1;
- (void)unregisterUpdateTaskHandler:(id)a0;
- (void).cxx_destruct;

@end
