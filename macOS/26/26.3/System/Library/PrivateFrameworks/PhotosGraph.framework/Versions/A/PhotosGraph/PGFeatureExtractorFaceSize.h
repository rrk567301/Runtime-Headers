@interface PGFeatureExtractorFaceSize : PGFaceFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)defaultFloatVectorWithError:(id *)a0;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
