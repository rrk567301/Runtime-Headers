@interface PGFeatureExtractorCLIPprint : PGAssetFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;
- (id)_floatArrayFromSceneprint:(id)a0;

@end
