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

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (unsigned long long)maxRetries;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_supplementTodayData:(id)a0 forResults:(id)a1;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (id)todayBannerWithTodayConfig:(id)a0 todayData:(id)a1;
- (unsigned long long)convertBannerBackgroundMethodToNTBannerBackgroundType:(int)a0;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)a0 catchUpOperationResultsBySectionDescriptor:(id)a1 appConfiguration:(id)a2 feedPersonalizer:(id)a3 todayData:(id)a4 todayBanner:(id)a5 debugInspection:(id)a6 completion:(id /* block */)a7;
- (void)resetForRetry;
- (void)_fetchTodayResultsWithFetchHelper:(id)a0 aggregator:(id)a1 budgetInfo:(id)a2 appConfiguration:(id)a3 feedPersonalizer:(id)a4 todayData:(id)a5 todayBanner:(id)a6 completion:(id /* block */)a7;
- (unsigned long long)convertBannerImageMethodToNTBannerImageType:(int)a0;
- (id)_firstRefreshDateDefaultsKey;
- (void).cxx_destruct;
- (id)gradientBackgroundPairFromLightGradientDict:(id)a0 darkGradientDict:(id)a1;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)a0;
- (id)init;
- (void)_assembleQueueDescriptorsWithConfig:(id)a0 allowOnlyWatchEligibleSections:(BOOL)a1 respectsWidgetVisibleSectionsLimit:(BOOL)a2 personalizationTreatment:(id)a3 aggregateStore:(id)a4 appConfiguration:(id)a5 todayData:(id)a6 completion:(id /* block */)a7;
- (id)dictionaryFromColorGradient:(id)a0;

@end
