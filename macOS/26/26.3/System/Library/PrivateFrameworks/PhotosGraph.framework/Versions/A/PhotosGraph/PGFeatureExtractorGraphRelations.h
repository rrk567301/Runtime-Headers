@class PGGraph, MAFeatureExtractor;

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 featureExtractor:(id)a1;
- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatVectorWithMomentNodeCollection:(id)a0 error:(id *)a1;

@end
