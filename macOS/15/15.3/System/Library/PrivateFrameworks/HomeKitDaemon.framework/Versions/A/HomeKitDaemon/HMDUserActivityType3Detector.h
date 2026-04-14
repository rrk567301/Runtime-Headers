@class HMDUserActivityType3ScheduleListener, NSString, HMDBackgroundTaskManager, HMFPreferences, HMDUserActivityType3FocusListener;

@interface HMDUserActivityType3Detector : HMDUserActivityStateDetector <HMDUserActivityType3FocusListenerDelegate, HMDUserActivityType3ScheduleListenerDelegate>

@property (readonly, nonatomic) HMDUserActivityType3FocusListener *focusListener;
@property (readonly, nonatomic) HMDUserActivityType3ScheduleListener *scheduleListener;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (weak, nonatomic) HMFPreferences *preferences;

+ (unsigned long long)contributorType;

- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)initWithDataSource:(id)a0;
- (BOOL)_updateState:(unsigned long long)a0;
- (void)focusDidTrigger;
- (BOOL)_updateStateWithTransitionTime:(id)a0;
- (BOOL)_moveToTransitionalStateWithTransitionInterval:(double)a0;
- (BOOL)_updateStateWithFocus:(id)a0;
- (BOOL)_updateStateWithSchedule:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)evaluateAndSetInitialReport;
- (void)evaluateAndUpdateLatestReport;
- (void)handleTimerFiredNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 dataSource:(id)a1 focusListener:(id)a2 scheduleListener:(id)a3 backgroundTaskManager:(id)a4 preferences:(id)a5;
- (void)scheduleStateDidAutomaticallyUpdate;
- (BOOL)shouldIgnoreFocus:(id)a0;
- (BOOL)shouldIgnoreSchedule:(id)a0;
- (void)submitLogEventWithOldState:(unsigned long long)a0 logReason:(unsigned long long)a1;
- (long long)transitionIntervalInSeconds;
- (void)updateLatestReportWithReason:(unsigned long long)a0;
- (void)userDidUpdateSchedule;

@end
