@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager, NSObject;
@protocol NTGroupingServiceType, FCItemExposureRegistryType, NTTodayBannerValidator, OS_dispatch_queue, FCContentContext, NTTodayResultsSource, FCWritablePrivateDataStorage, FCReadablePrivateDataStorage, FCFeedPersonalizerFactoryType;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCFeedPersonalizerFactoryType> feedPersonalizerFactory;
@property (readonly, nonatomic) id<NTGroupingServiceType> groupingService;
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

- (id)placeholderResultsWithOperationInfo:(id)a0;
- (void)fetchLatestResultsWithOperationInfo:(id)a0 completion:(id /* block */)a1;
- (void)_setupTodayResultsSource;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (id)init;
- (id)initWithContentContext:(id)a0 feedPersonalizerFactory:(id)a1 groupingService:(id)a2 todayBannerValidator:(id)a3 articleExposureRegistry:(id)a4 processVariant:(unsigned long long)a5 accessQueue:(id)a6 fetchQueue:(id)a7;
- (void)networkReachabilityDidChange:(id)a0;
- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)a0 atDate:(id)a1;
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)a0 atDate:(id)a1;
- (void).cxx_destruct;

@end
