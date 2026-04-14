@class NSObject, NSString, EKEventStore;
@protocol OS_os_log, PowerUISignalMonitorDelegate;

@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) EKEventStore *calendar;
@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)monitorWithDelegate:(id)a0 trialManager:(id)a1 withContext:(id)a2;

- (void)startMonitoring;
- (unsigned long long)signalID;
- (id)requiredFullChargeDate;
- (void)sourceInformationChangedNotification:(id)a0;
- (id)initWithDelegate:(id)a0 trialManager:(id)a1 withContext:(id)a2;
- (id)detectedSignals;
- (id)upcomingEventIDs;
- (BOOL)isEventEligible:(id)a0 AtTime:(id)a1;
- (void).cxx_destruct;
- (id)nextRelevantDeadlineWithEventIDs:(id)a0;
- (id)nextFlightEventWithEventIDs:(id)a0;
- (void)stopMonitoring;

@end
