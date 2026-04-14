@class NSString, MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, MTTimerManagerExportedObject, MTTimerCache;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerProviding, MTTimerManagerIntentSupport, MTUserDefaultNotificationObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)a0;

- (void)checkIn;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addTimer:(id)a0;
- (BOOL)pauseCurrentTimerSync;
- (BOOL)resumeCurrentTimerSync;
- (id)getQueryDurations:(id /* block */)a0 withFuture:(id)a1;
- (id)defaultDurations;
- (void)dealloc;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)removeFavoriteDuration:(id)a0;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)removeTimer:(id)a0;
- (id)getCurrentTimerSync;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)stopCurrentTimer;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (void)reconnect;
- (id)nextTimer;
- (id)latestDuration;
- (id)repeatTimerWithIdentifier:(id)a0;
- (id)init;
- (id)removeRecentDuration:(id)a0;
- (id)saveLatestDuration:(id)a0;
- (id)addRecentDuration:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)updateTimer:(id)a0;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)timers;
- (id)_validateCanStartTimer:(id)a0;
- (id)timerWithIdentifier:(id)a0;
- (void)loadAllDurationsWithCompletion:(id /* block */)a0;
- (id)favoriteDurations;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (BOOL)stopCurrentTimerSync;
- (id)initWithMetrics:(id)a0;
- (id)currentTimer;
- (id)timersSync;
- (id)resumeCurrentTimer;
- (id)addFavoriteDuration:(id)a0;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)startCurrentTimerWithDuration:(double)a0;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)recentDurations;
- (id)pauseCurrentTimer;
- (void).cxx_destruct;

@end
