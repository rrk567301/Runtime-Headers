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
+ (void)setDefaultDuration:(double)a0;
+ (double)defaultDuration;

- (id)nextTimer;
- (id)addFavoriteDuration:(id)a0;
- (BOOL)stopCurrentTimerSync;
- (void)checkIn;
- (id)startCurrentTimerWithDuration:(double)a0;
- (id)_validateCanStartTimer:(id)a0;
- (id)timersSync;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)removeRecentDuration:(id)a0;
- (id)recentDurations;
- (id)timers;
- (id)getCurrentTimerSync;
- (id)favoriteDurations;
- (id)addTimer:(id)a0;
- (BOOL)pauseCurrentTimerSync;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)removeFavoriteDuration:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)getQueryDurations:(id /* block */)a0 withFuture:(id)a1;
- (void).cxx_destruct;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)defaultDurations;
- (id)latestDuration;
- (BOOL)resumeCurrentTimerSync;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (id)addRecentDuration:(id)a0;
- (id)stopCurrentTimer;
- (void)loadAllDurationsWithCompletion:(id /* block */)a0;
- (id)pauseCurrentTimer;
- (id)initWithMetrics:(id)a0;
- (id)currentTimer;
- (id)init;
- (id)resumeCurrentTimer;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)timerWithIdentifier:(id)a0;
- (id)saveLatestDuration:(id)a0;
- (void)reconnect;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (id)repeatTimerWithIdentifier:(id)a0;

@end
