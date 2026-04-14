@class NSMutableDictionary;

@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)sharedStore;
+ (id)plistMetricsFromDir:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getAllSubsystem;
- (void)buildDeviceMetadata;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)addMetricsToCache:(id)a0;
- (void)cacheFrameworkMetrics;
- (void)cachePlistMetrics;
- (id)getAllFrameworkSubsystem;
- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
- (void)loadMetricsForSubsystem:(id)a0;

@end
