@class BMMLSEVirtualFeatureStoreFeatureFeatureValue, NSString;

@interface BMMLSEVirtualFeatureStoreFeature : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int featureName;
@property (readonly, nonatomic) BMMLSEVirtualFeatureStoreFeatureFeatureValue *featureValue;
@property (readonly, nonatomic) unsigned int featureItselfVersion;
@property (nonatomic) BOOL hasFeatureItselfVersion;
@property (readonly, nonatomic) unsigned int featureFreshnessInHours;
@property (nonatomic) BOOL hasFeatureFreshnessInHours;
@property (readonly, nonatomic) unsigned int eventVolumeToComputeFeature;
@property (nonatomic) BOOL hasEventVolumeToComputeFeature;
@property (readonly, nonatomic) unsigned int timeSpentToComputeFeature;
@property (nonatomic) BOOL hasTimeSpentToComputeFeature;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureName:(int)a0 featureValue:(id)a1 featureItselfVersion:(id)a2 featureFreshnessInHours:(id)a3 eventVolumeToComputeFeature:(id)a4 timeSpentToComputeFeature:(id)a5;

@end
