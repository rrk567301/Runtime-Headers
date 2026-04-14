@interface PGFeatureExtractorFaceAgeType : PGFaceFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_floatVectorForFaceAgeType:(unsigned short)a0;

@end
