@class NSMutableDictionary;

@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)sharedStore;
+ (id)plistMetricsFromDir:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)buildDeviceMetadata;
- (void)persistMetrics;
- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
- (void)cacheFrameworkMetrics;
- (void)cachePlistMetrics;
- (void)loadMetricsForSubsystem:(id)a0;
- (void)addMetricsToCache:(id)a0;
- (BOOL)shouldPersistMetrics;
- (id)updateVersionsForMetricStream:(id)a0 forBuild:(id)a1;
- (void)addNewMetricsToStream:(id)a0 forBuild:(id)a1 excludeMetrics:(id)a2;
- (id)getMetricsFromCache;

@end
