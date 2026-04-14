@class NSArray, MAFeatureExtractor;

@interface PGSequentialFeatureExtractor : MAFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor;
@property (readonly, nonatomic) NSArray *featureTransformers;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
- (id)_transformFloatVector:(id)a0 error:(id *)a1;
- (id)defaultFloatVectorWithError:(id *)a0;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithFeatureExtractor:(id)a0 featureTransformers:(id)a1;

@end
