@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor

+ (unsigned long long)preCalculatedPhotoLibrarySize;
+ (BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)a0;
+ (void)resetPreCalculatedPhotoLibrarySize;
+ (id)_allAssetsOfType:(long long)a0 withOptions:(id)a1;
+ (void)setPreCalculatedPhotoLibrarySize:(unsigned long long)a0;

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
