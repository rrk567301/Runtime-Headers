@class RTDefaultsManager, NSMutableDictionary, RTTimerManager, RTTimer, NSObject;
@protocol OS_dispatch_queue;

@interface RTIntermittentGNSSManagerMetrics : NSObject

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSMutableDictionary *powerLogEventDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long mostRecentSignalSwitch;
@property (nonatomic) BOOL currentSessionOngoing;
@property (nonatomic) unsigned long long currentSessionNumLocationsReceived;
@property (nonatomic) double currentSessionDuration;
@property (nonatomic) double currentSessionTimeSinceLastSession;
@property (nonatomic) unsigned long long currentSessionActivationCriteria;
@property (nonatomic) unsigned long long currentSessionDeactivationCriteria;
@property (nonatomic) BOOL currentStreakOngoing;
@property (nonatomic) int currentStreakNumSessions;
@property (nonatomic) double currentStreakDuration;
@property (nonatomic) unsigned long long currentStreakActivationCriteria;
@property (nonatomic) unsigned long long currentStreakDeactivationCriteria;
@property (retain, nonatomic) RTTimer *streakMetricsTimer;

+ (id)signalCategoryToString:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)shutdown;
- (void)setup;
- (id)initWithDefaultsManager:(id)a0 timerManager:(id)a1;
- (double)_getCurrentSessionDuration;
- (id)getLastRegistrationDate;
- (id)_getLastRegistrationDate;
- (void)updateSessionLocationCount:(unsigned long long)a0;
- (void)updateMetricsForKey:(id)a0;
- (void)_updateMetricsForKey:(id)a0;
- (void)processSignalSwitch:(unsigned long long)a0;
- (id)_collectDailyMetrics;
- (id)_collectSessionMetrics;
- (id)_collectStreakMetrics;
- (void)_clearDailyMetrics;
- (void)_clearSessionMetrics;
- (void)_clearStreakMetrics;
- (void)submitDailyMetricsToCoreAnalytics;
- (void)_submitDailyMetricsToCoreAnalytics;
- (void)_submitSessionMetricsToCoreAnalytics;
- (void)_submitStreakMetricsToCoreAnalytics;

@end
