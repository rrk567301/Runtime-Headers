@class HDActivityCacheManager, NSString, NSCalendar, NSDateComponents, HKActivityCache;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
    HDActivityCacheManager *_activityCacheManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)activityCacheManager:(id)a0 changedTodayActivityCache:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)shouldObserveActivityCache;

@end
