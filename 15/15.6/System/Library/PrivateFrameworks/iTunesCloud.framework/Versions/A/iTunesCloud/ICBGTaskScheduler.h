@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICBGTaskScheduler : NSObject {
    NSMutableDictionary *_taskInfoDictionaries;
    NSMutableDictionary *_taskHandlers;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _registered;
}

@property (class, readonly, nonatomic) ICBGTaskScheduler *sharedTaskScheduler;

- (void).cxx_destruct;
- (id)_init;
- (void)_scheduleNextTask;
- (void)cancelTask:(id)a0;
- (void)_loadSavedTaskInfo;
- (void)_postExpiredEvents;
- (void)_saveTaskInfo;
- (char)hasScheduledTask:(id)a0;
- (void)registerForTask:(id)a0 handler:(id /* block */)a1;
- (void)scheduleRecurringTask:(id)a0 withInterval:(double)a1 afterDelay:(double)a2 withUserData:(id)a3;
- (void)scheduleTask:(id)a0 afterDelay:(double)a1 withUserData:(id)a2;

@end
