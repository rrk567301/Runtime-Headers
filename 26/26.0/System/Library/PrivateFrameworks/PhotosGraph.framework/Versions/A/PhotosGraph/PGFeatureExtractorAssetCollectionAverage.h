@class NSArray, MAFeatureExtractor, NSString;

@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {
    NSString *_name;
}

@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor;
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
- (id)initWithAssetFeatureExtractor:(id)a0 assetFetchOptionPropertySet:(id)a1 name:(id)a2;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
