@class NTTodayResults, NTPBTodayResultOperationFetchInfo, NSDictionary, NSMutableSet, NSDate, NTCatchUpOperationForYouFetchInfo, NTPBTodayConfig;

@interface NTNewsTodayResultOperation : NTTodayResultOperation

@property (retain, nonatomic) NSMutableSet *articleIDsToExclude;
@property (copy, nonatomic) NTPBTodayConfig *todayConfig;
@property (copy, nonatomic) NSDate *filterDate;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic) double resultHeadlineScaleFactor;
@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

+ (void)initialize;

- (void)performOperation;
- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (unsigned long long)convertBannerBackgroundMethodToNTBannerBackgroundType:(int)a0;
- (id)_supplementTodayData:(id)a0 forResults:(id)a1;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)a0;
- (BOOL)validateOperation;
- (id)todayBannerWithTodayConfig:(id)a0 todayData:(id)a1;
- (id)init;
- (id)_firstRefreshDateDefaultsKey;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)a0 catchUpOperationResultsBySectionDescriptor:(id)a1 appConfiguration:(id)a2 feedPersonalizer:(id)a3 todayData:(id)a4 todayBanner:(id)a5 completion:(id /* block */)a6;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (id)dictionaryFromColorGradient:(id)a0;
- (void)_assembleQueueDescriptorsWithConfig:(id)a0 allowOnlyWatchEligibleSections:(BOOL)a1 respectsWidgetVisibleSectionsLimit:(BOOL)a2 personalizationTreatment:(id)a3 aggregateStore:(id)a4 appConfiguration:(id)a5 todayData:(id)a6 completion:(id /* block */)a7;
- (void)_fetchTodayResultsWithFetchHelper:(id)a0 aggregator:(id)a1 budgetInfo:(id)a2 appConfiguration:(id)a3 feedPersonalizer:(id)a4 todayData:(id)a5 todayBanner:(id)a6 completion:(id /* block */)a7;
- (id)gradientBackgroundPairFromLightGradientDict:(id)a0 darkGradientDict:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)convertBannerImageMethodToNTBannerImageType:(int)a0;

@end
