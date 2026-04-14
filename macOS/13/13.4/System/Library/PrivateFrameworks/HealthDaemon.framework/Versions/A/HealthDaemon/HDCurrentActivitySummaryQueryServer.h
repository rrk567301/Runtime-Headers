@class NSString, NSDictionary, HDCurrentActivitySummaryHelper, HKActivitySummary;

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver> {
    HDCurrentActivitySummaryHelper *_currentSummaryHelper;
    HKActivitySummary *_lastActivitySummary;
    NSDictionary *_collectionIntervals;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
