@class NSString, MAFeatureExtractor;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor

@property (readonly) MAFeatureExtractor *faceFeatureExtractor;
@property (readonly) NSString *name;

- (id)featureNames;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1 underlyingError:(id)a2;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)floatVectorWithFaces:(id)a0 error:(id *)a1;
- (id)initWithFaceFeatureExtractor:(id)a0 name:(id)a1;

@end
