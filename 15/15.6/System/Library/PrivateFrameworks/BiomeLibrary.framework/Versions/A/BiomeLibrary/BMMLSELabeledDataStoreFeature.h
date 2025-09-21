@class BMMLSELabeledDataStoreFeatureFeatureValue, NSString;

@interface BMMLSELabeledDataStoreFeature : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int featureName;
@property (readonly, nonatomic) BMMLSELabeledDataStoreFeatureFeatureValue *featureValue;
@property (readonly, nonatomic) unsigned int featureItselfVersion;
@property (nonatomic) char hasFeatureItselfVersion;
@property (readonly, nonatomic) unsigned int featureFreshnessInHours;
@property (nonatomic) char hasFeatureFreshnessInHours;
@property (readonly, nonatomic) unsigned int eventVolumeToComputeFeature;
@property (nonatomic) char hasEventVolumeToComputeFeature;
@property (readonly, nonatomic) unsigned int timeSpentToComputeFeature;
@property (nonatomic) char hasTimeSpentToComputeFeature;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithFeatureName:(int)a0 featureValue:(id)a1 featureItselfVersion:(id)a2 featureFreshnessInHours:(id)a3 eventVolumeToComputeFeature:(id)a4 timeSpentToComputeFeature:(id)a5;
- (id)initByReadFrom:(id)a0;

@end
