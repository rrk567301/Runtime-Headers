@interface PGFeatureExtractorImageAspectRatio : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
