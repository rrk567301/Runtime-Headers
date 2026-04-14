@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logTimerDismissed;
- (void)logTimerUpdated;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logTimerAdded;
- (void)logTimerDeleted;
- (void).cxx_destruct;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logSyncCompleted;
- (void)logSyncFailedWithError:(id)a0;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logTimerRepeated;
- (id)init;

@end
