@class NSTimeZone, NSString, NSArray, NSDate, NSDateComponents;

@interface HMDTimerTrigger : HMDTrigger {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *currentFireDate;
}

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *fireDateTimeZone;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (copy, nonatomic) NSDateComponents *fireRepeatInterval;
@property (copy, nonatomic) NSArray *recurrences;
@property (retain, nonatomic) NSString *timerID;
@property (readonly) NSDate *currentFireDate;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)validateRecurrence:(id)a0 calendar:(id)a1 fireDate:(id)a2;
+ (id)validateSignificantOffset:(id)a0;
+ (id)validateRecurrences:(id)a0;
+ (id)validateTriggerModel:(id)a0 message:(id)a1 currentFireDate:(id)a2;
+ (id)validateWholeMinuteDate:(id)a0 onCalendar:(id)a1;
+ (id)getCalendar:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_closestDatesForStartDate:(id)a0 earliestDate:(id)a1 timeZone:(id)a2 deliveryRepeatInterval:(id)a3 returnDateBefore:(id *)a4 returnDateAfter:(id *)a5;
- (id)_nextFireDate;
- (void)_activateWithCompletion:(id /* block */)a0;
- (unsigned long long)triggerType;
- (id)dumpState;
- (id)_serializeForAdd;
- (void)_registerForMessages;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (void)_stopTimer;
- (void)_startTimer:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (void)configure:(id)a0 messageDispatcher:(id)a1 queue:(id)a2;
- (BOOL)shouldActivateOnLocalDevice;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (id)emptyModelObject;
- (void)handleTimerFiredNotification:(id)a0;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)a0;
- (void)setCurrentFireDate:(id)a0;
- (void)completeConfiguration;
- (void)timerTriggered;
- (void)_startTimerWithFireDate:(id)a0;
- (void)_startTimerWithSignificantEventDate:(id)a0;
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)a0 message:(id)a1;
- (void)_handleTimerTriggerUpdate:(id)a0 message:(id)a1;
- (BOOL)_reactivateTrigger;
- (BOOL)_reactivateFireDateTrigger;
- (BOOL)_reactivateSignificantEventTrigger;
- (void)_disableTimerOffReactivationFailure;
- (id)_nextSignificantEventFireDate;
- (BOOL)_shouldExecuteActionSet;
- (void)_timerTriggered;
- (void)_reactiveTriggerAfterDelay;
- (id)getCalendar;
- (id)getFireInterval;

@end
