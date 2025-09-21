@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MTAlarmStorage;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (readonly, nonatomic) NSMutableDictionary *alarmsByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)writeAlarmUpdatedEventForAlarms:(id)a0;
- (id)initWithAlarmStorage:(id)a0;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)handleSystemReady;
- (void)updateAlarmCaches:(id)a0;
- (void)writeAlarmEventsToBiome:(id)a0 ofType:(unsigned long long)a1;
- (void)writeAlarmEventToBiome:(id)a0 ofType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
