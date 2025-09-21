@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)_generateErrorWithErrorCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
- (long long)featureLength;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
