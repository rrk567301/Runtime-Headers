@class NSArray, MAFeatureExtractor, NSString;

@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {
    NSString *_name;
}

@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor;
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet;

- (id)name;
- (void).cxx_destruct;
- (id)featureNames;
- (id)initWithAssetFeatureExtractor:(id)a0 assetFetchOptionPropertySet:(id)a1 name:(id)a2;
- (char)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
