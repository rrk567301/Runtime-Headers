@class NSString, HKSleepDaySummaryCacheSettings, NSCalendar, NSMutableArray;

@interface HKSleepDaySummaryQuery : HKQuery <HKSleepDaySummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}

@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (copy, nonatomic) NSCalendar *calendarOverrides;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) char skipDaysWithoutSleepAnalysis;
@property (readonly, nonatomic) char onlySleepAnalysis;
@property (readonly, nonatomic) char surfaceSleepStages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void).cxx_destruct;
- (void)client_deliverDaySummaries:(id)a0 clearPending:(char)a1 isFinalBatch:(char)a2 queryUUID:(id)a3;
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 ascending:(char)a1 limit:(long long)a2 options:(unsigned long long)a3 resultsHandler:(id /* block */)a4;
- (void)queue_deliverError:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_validate;

@end
