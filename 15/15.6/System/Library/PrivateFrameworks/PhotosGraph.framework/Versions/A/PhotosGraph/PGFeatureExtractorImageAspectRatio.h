@interface PGFeatureExtractorImageAspectRatio : PGAssetFeatureExtractor

- (id)name;
- (id)featureNames;
- (char)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
