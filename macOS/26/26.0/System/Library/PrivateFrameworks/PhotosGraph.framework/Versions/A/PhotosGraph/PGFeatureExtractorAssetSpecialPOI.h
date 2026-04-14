@class PGGraph;

@interface PGFeatureExtractorAssetSpecialPOI : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph;

- (id)featureNames;
- (id)initWithGraph:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatVectorWithMoment:(id)a0 error:(id *)a1;

@end
