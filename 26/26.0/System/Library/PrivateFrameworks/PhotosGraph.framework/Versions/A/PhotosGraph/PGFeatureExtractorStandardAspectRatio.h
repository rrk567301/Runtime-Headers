@interface PGFeatureExtractorStandardAspectRatio : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (float)precisionEpsilon;
- (long long)standardAspectRatioFromFloatVector:(id)a0;

@end
