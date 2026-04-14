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
- (id)getAllSubsystem;
- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
- (void)cacheFrameworkMetrics;
- (void)cachePlistMetrics;
- (void)addMetricsToCache:(id)a0;
- (id)updateVersionsForMetricStream:(id)a0 forBuild:(id)a1;
- (void)addNewMetricsToStream:(id)a0 forBuild:(id)a1 excludeMetrics:(id)a2;
- (void)updateMetricHistoryInStream:(id)a0;
- (id)getMetricsFromCache;
- (BOOL)shouldPersistMetrics;
- (BOOL)hasMetadataProtoVersionChanged:(id)a0;
- (void)loadMetricsForSubsystem:(id)a0;

@end
