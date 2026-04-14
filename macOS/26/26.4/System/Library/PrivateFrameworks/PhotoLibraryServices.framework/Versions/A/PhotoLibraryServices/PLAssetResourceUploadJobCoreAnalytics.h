@class PLPhotoLibrary;

@interface PLAssetResourceUploadJobCoreAnalytics : NSObject {
    PLPhotoLibrary *_library;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_configurations;
- (long long)_assetCount;
- (id)_configurationAnalytics;
- (id)_createAndPopulateCoreAnalyticsEventManager;
- (id)_jobAnalyticsForBundleIdentifiers:(id)a0;
- (id)_jobFetchRequest;
- (id)_jobPredicateForBundleIdentifier:(id)a0;
- (id)_jobPredicateForJobState:(short)a0;
- (void)publishCoreAnalyticsEvent;

@end
