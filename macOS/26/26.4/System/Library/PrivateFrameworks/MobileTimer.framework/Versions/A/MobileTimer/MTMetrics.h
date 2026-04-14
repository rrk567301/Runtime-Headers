@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logMultipleTimersAdded:(id)a0;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logTimerDeleted;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logTimerRepeated;
- (void).cxx_destruct;
- (void)logTimerUpdated;
- (void)logSyncFailedWithError:(id)a0;
- (void)logAlarmAdded:(BOOL)a0;
- (id)init;
- (void)logTimerDismissed;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logTimerAdded;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logSyncCompleted;

@end
