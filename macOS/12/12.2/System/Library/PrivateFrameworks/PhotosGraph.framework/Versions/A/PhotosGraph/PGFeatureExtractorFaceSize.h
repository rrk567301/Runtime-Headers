@interface PGFeatureExtractorFaceSize : PGFaceFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)defaultFloatVectorWithError:(id *)a0;

@end
