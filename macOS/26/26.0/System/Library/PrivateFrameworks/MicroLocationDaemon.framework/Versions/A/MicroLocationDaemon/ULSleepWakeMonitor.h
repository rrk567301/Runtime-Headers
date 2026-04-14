@class CUSleepWakeMonitor;

@interface ULSleepWakeMonitor : ULEventMonitor

@property (retain, nonatomic) CUSleepWakeMonitor *sleepWakeMonitor;
@property (nonatomic) int sleepWakeState;

+ (int)_internalSleepWakeStateFromCUSleepWakeState:(int)a0;

- (void)stopMonitoring:(id)a0;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)_didUpdateSleepWakeState:(int)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
