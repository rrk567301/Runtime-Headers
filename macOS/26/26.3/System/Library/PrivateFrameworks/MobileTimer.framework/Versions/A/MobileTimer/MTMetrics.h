@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logTimerUpdated;
- (void)logTimerDeleted;
- (void)logSyncCompleted;
- (void)logTimerDismissed;
- (id)init;
- (void)logTimerAdded;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logTimerRepeated;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logSyncFailedWithError:(id)a0;

@end
