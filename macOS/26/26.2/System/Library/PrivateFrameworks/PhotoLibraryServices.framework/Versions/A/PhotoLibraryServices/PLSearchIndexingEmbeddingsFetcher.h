@class NSError, NSMutableDictionary;

@interface PLSearchIndexingEmbeddingsFetcher : NSObject {
    NSMutableDictionary *_mutableEmbeddingsByUUID;
    NSError *_prefetchError;
}

- (void).cxx_destruct;
- (id)init;
- (id)embeddingForAsset:(id)a0 indexingContext:(id)a1 allowFetchIfMissing:(BOOL)a2;
- (void)prefetchEmbeddingsForAssets:(id)a0 indexingContext:(id)a1;

@end
