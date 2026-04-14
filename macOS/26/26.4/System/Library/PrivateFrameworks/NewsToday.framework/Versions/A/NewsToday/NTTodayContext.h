@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager, NSObject;
@protocol FCCacheInvalidationManagerType, NTGroupingServiceType, FCItemExposureRegistryType, NTTodayBannerValidator, OS_dispatch_queue, FCContentContext, NTTodayResultsSource, FCFeedPersonalizerFactoryType, FCReadablePrivateDataStorage, FCWritablePrivateDataStorage;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCFeedPersonalizerFactoryType> feedPersonalizerFactory;
@property (readonly, nonatomic) id<NTGroupingServiceType> groupingService;
@property (readonly, nonatomic) id<FCCacheInvalidationManagerType> cacheInvalidationManager;
@property (readonly, nonatomic) id<NTTodayBannerValidator> todayBannerValidator;
@property (readonly, nonatomic) id<FCItemExposureRegistryType> articleExposureRegistry;
@property (readonly, nonatomic) id<FCReadablePrivateDataStorage> readablePrivateDataStorage;
@property (readonly, nonatomic) id<FCWritablePrivateDataStorage> writablePrivateDataStorage;
@property (readonly, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (retain, nonatomic) id<NTTodayResultsSource> todayResultsSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) FCAsyncSerialQueue *fetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ newResultsHandler;

- (void)_setupTodayResultsSource;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)placeholderResultsWithOperationInfo:(id)a0;
- (id)init;
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)a0 atDate:(id)a1;
- (void)networkReachabilityDidChange:(id)a0;
- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)a0 atDate:(id)a1;
- (id)initWithContentContext:(id)a0 feedPersonalizerFactory:(id)a1 groupingService:(id)a2 cacheInvalidationManager:(id)a3 todayBannerValidator:(id)a4 articleExposureRegistry:(id)a5 processVariant:(unsigned long long)a6 accessQueue:(id)a7 fetchQueue:(id)a8;
- (void)fetchLatestResultsWithOperationInfo:(id)a0 completion:(id /* block */)a1;

@end
