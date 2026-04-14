@class MAFeatureExtractor;

@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *photoLibraryFeatureExtractor;

- (id)featureNames;
- (id)name;
- (void).cxx_destruct;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithPhotoLibraryFeatureExtractor:(id)a0;

@end
