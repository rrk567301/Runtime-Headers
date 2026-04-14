@class NSString, NSDictionary, FedStatsBucketedType, NSNumber;
@protocol FedStatsDataTypeProtocol;

@interface FedStatsHistogramType : NSObject <FedStatsDataTypeProtocol>

@property (readonly, nonatomic) id<FedStatsDataTypeProtocol> featureType;
@property (readonly, nonatomic) NSString *metricField;
@property (readonly, nonatomic) NSNumber *clippingBound;
@property (readonly, nonatomic) NSDictionary *featureFactors;
@property (readonly, nonatomic) NSDictionary *defaultFeatureFactor;
@property (readonly, nonatomic) NSString *featureField;
@property (readonly, nonatomic) FedStatsBucketedType *normType;
@property (readonly, nonatomic) NSDictionary *normDediscoTypeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (void).cxx_destruct;
- (long long)dataType;
- (unsigned long long)classCount;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromHistogramVector:(id)a0 possibleError:(id *)a1;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)decodeFromOneHotVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToHistogramVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToOneHotVector:(id)a0 possibleError:(id *)a1;
- (id)initWithFeatureType:(id)a0 metricField:(id)a1 clippingBound:(id)a2 featureFactors:(id)a3 defaultFeatureFactor:(id)a4 featureField:(id)a5 normType:(id)a6 normDediscoTaskConfig:(id)a7;
- (id)invertScaleAndShift:(id)a0;
- (id)scaleAndShift:(id)a0;

@end
