@class NSObject, NSMutableDictionary, NSString, NSDate, ATXAppInFocusStream, _ATXAppDailyDoseCurrentStore;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDose : NSObject {
    ATXAppInFocusStream *_appInFocusStream;
    _ATXAppDailyDoseCurrentStore *_currentDoseStore;
    NSMutableDictionary *_appHistoricalDoseMap;
    NSDate *_duetHistoryTimestamp;
    NSString *_previousAppId;
    NSDate *_previousAppLaunchDate;
}

@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultHistoricalDosePath;
+ (void)deleteCurrentDoseFile;
+ (id)_defaultCurrentDosePath;

- (void)train;
- (id)now;
- (id)initWithAppInFocusStream:(id)a0;
- (void)_doTrainingOn:(id)a0 timeZone:(id)a1 completion:(id /* block */)a2;
- (id)previousBundleId;
- (void)_writeHistoricalDoseWithCompletion:(id /* block */)a0;
- (id)getDoseForApp:(id)a0;
- (id)init;
- (void)_asyncStopAppUsageAtDate:(id)a0 completion:(id /* block */)a1;
- (id)currentDoseStore;
- (double)getCurrentDoseForApp:(id)a0;
- (void)_recordAppDurationForApp:(id)a0 withStartTime:(id)a1 andEndTime:(id)a2;
- (BOOL)_loadHistoricalDoseFrom:(id)a0;
- (void)stopAppUsageAtDate:(id)a0;
- (void)_backfillAppDurationMapDBForToday;
- (id)todayWithTimeZone:(id)a0;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithAppInFocusStream:(id)a0 timeZone:(id)a1 today:(id)a2 alpha:(double)a3 historicalDosePath:(id)a4 completion:(id /* block */)a5;

@end
