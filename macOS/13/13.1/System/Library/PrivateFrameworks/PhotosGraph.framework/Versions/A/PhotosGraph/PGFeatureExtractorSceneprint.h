@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;

@end
