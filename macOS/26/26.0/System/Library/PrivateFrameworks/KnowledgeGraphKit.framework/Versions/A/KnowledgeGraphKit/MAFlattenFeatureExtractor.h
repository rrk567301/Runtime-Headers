@class NSArray, NSString;

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
    NSArray *_featureNames;
}

@property (readonly, nonatomic) NSArray *featureExtractors;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 featureExtractors:(id)a1;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
