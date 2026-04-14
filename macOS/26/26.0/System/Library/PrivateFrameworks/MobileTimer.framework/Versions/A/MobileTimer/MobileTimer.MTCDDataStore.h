@interface MobileTimer.MTCDDataStore : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_tasks;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ actor;
    void /* unknown type, empty encoding */ storeLoaded;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ eventPublisher;
}

@property (nonatomic, weak) void /* function */ alarmObserver;
@property (nonatomic, weak) void /* function */ timerObserver;
@property (nonatomic, weak) void /* function */ alarmKitObserver;
@property (nonatomic, readonly) BOOL isReady;

- (void)getAlarmsWithCompletion:(id /* block */)a0;
- (void)setSleepAlarms:(id)a0;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (id)init;
- (void)loadStore;
- (void).cxx_destruct;
- (void)addAlarms:(id)a0;
- (void)addTimers:(id)a0;
- (void)deleteAllTimers;
- (id)initInMemoryStore:(BOOL)a0 storeFailure:(BOOL)a1;
- (void)addAlarms:(id)a0 completion:(id /* block */)a1;
- (void)addDurations:(id)a0 isFavorite:(BOOL)a1;
- (void)addDurations:(id)a0 isFavorite:(BOOL)a1 completion:(id /* block */)a2;
- (void)addTimers:(id)a0 completion:(id /* block */)a1;
- (void)deleteAlarms:(id)a0;
- (void)deleteAlarms:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllDurations;
- (void)deleteAllDurationsWithCompletion:(id /* block */)a0;
- (void)deleteAllTimersWithCompletion:(id /* block */)a0;
- (void)deleteDuration:(id)a0 isFavorite:(BOOL)a1;
- (void)deleteDuration:(id)a0 isFavorite:(BOOL)a1 completion:(id /* block */)a2;
- (void)deleteTimers:(id)a0;
- (void)deleteTimers:(id)a0 completion:(id /* block */)a1;
- (void)getAllDurationsWithCompletion:(id /* block */)a0;
- (void)getFavoriteDurationsWithCompletion:(id /* block */)a0;
- (void)getNonSleepAlarmsWithCompletion:(id /* block */)a0;
- (void)getRecentDurationsWithCompletion:(id /* block */)a0;
- (void)getRecentsFavoritesLatestWithCompletion:(id /* block */)a0;
- (void)getSleepAlarmsWithCompletion:(id /* block */)a0;
- (id)initInMemoryStore:(BOOL)a0;
- (void)setSleepAlarms:(id)a0 completion:(id /* block */)a1;
- (void)updateAlarms:(id)a0;
- (void)updateAlarms:(id)a0 completion:(id /* block */)a1;
- (void)updateTimers:(id)a0;
- (void)updateTimers:(id)a0 completion:(id /* block */)a1;

@end
