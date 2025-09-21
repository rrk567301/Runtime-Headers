@class HMFTimer, NSString;

@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *reevaluateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)status;
- (char)evaluate;
- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)_getMaxUpdateApplyEndTime;
- (id)_getTriggerFireDateBeforeEndTime:(id)a0;
- (void)_startReevaluateTimer:(double)a0;
- (void)_stopReevaluateTimer;

@end
