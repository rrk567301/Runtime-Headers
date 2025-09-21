@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logAlarmAdded:(BOOL)a0;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logTimerRepeated;
- (void)logTimerUpdated;
- (void)logSyncCompleted;
- (id)init;
- (void)logSyncFailedWithError:(id)a0;
- (void)logTimerAdded;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logTimerDeleted;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logTimerDismissed;
- (void).cxx_destruct;

@end
