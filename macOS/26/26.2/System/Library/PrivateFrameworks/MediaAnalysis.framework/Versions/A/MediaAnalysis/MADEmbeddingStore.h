@interface MADEmbeddingStore : NSObject

+ (id)fetchEmbeddingsWithAssetUUIDs:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0 photoLibraryURL:(id)a1 error:(id *)a2;
+ (id)searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)_thumbnailIdentifiersFromMediaAnalysisResults:(id)a0 assetLocalIdentifier:(id)a1;
+ (id)embeddingStoreDirectoryForPhotoLibrary:(id)a0;
+ (BOOL)includeAudioFusedVideoEmbeddings;
+ (id)preferredImageEmbeddingsForAssetUUID:(id)a0 version:(unsigned long long *)a1 fromImageEmbeddingResults:(id)a2 error:(id *)a3;
+ (id)preferredVideoEmbeddingsForAssetUUID:(id)a0 version:(unsigned long long *)a1 fromVideoEmbeddingResults:(id)a2 audioFusedVideoEmbeddingResults:(id)a3 summarizedVideoEmbeddingResults:(id)a4 error:(id *)a5;

@end
