@class NSString;
@protocol HMDUserActivityType3ScheduleListener, HMDUserActivityType3PolicyDelegate, HMDHomeActivityStateManagerDataSource, HMDUserActivityType3FocusListener;

@interface HMDUserActivityType3Policy : HMFObject

@property (readonly, nonatomic) id<HMDUserActivityType3ScheduleListener> scheduleListener;
@property (readonly, nonatomic) id<HMDUserActivityType3FocusListener> focusListener;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) NSString *sleepTransitionTimerIdentifier;
@property (weak, nonatomic) id<HMDUserActivityType3PolicyDelegate> delegate;

- (void).cxx_destruct;
- (char)evaluate;
- (char)_updateState:(unsigned long long)a0;
- (void)unconfigure;
- (void)focusDidTrigger;
- (char)_scheduleEvaluateInTransitionInterval:(double)a0;
- (char)_updateStateWithFocus:(id)a0;
- (char)_updateStateWithSchedule:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)evaluateAndNotifyDelegate;
- (unsigned long long)evaluateStateWithFocus:(id)a0;
- (unsigned long long)evaluateStateWithSchedule:(id)a0;
- (unsigned long long)evaluateStateWithTransitionTriggerDate:(id)a0;
- (void)handleFocusDidTrigger:(char)a0;
- (void)handleScheduleStateDidUpdate:(unsigned long long)a0;
- (void)handleTimerFiredNotification:(id)a0;
- (id)initWithDataSource:(id)a0 scheduleListener:(id)a1 focusListener:(id)a2;
- (void)resetTransitionTimer;
- (void)scheduleStateDidAutomaticallyUpdate;
- (char)shouldIgnoreFocus:(id)a0;
- (char)shouldIgnoreSchedule:(id)a0;
- (void)submitLogEventWithOldState:(unsigned long long)a0 logReason:(unsigned long long)a1;
- (long long)transitionIntervalInSeconds;
- (void)userDidUpdateSchedule;

@end
