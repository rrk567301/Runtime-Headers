@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logTimerDismissed;
- (void)logSyncFailedWithError:(id)a0;
- (void)logAlarmDeleted:(BOOL)a0;
- (void).cxx_destruct;
- (void)logTimerAdded;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logTimerUpdated;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logTimerDeleted;
- (void)logSyncCompleted;
- (id)init;
- (void)logTimerRepeated;

@end
