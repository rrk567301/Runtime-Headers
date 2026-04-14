@class MSVLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    unsigned long long _backgroundCacheSize;
    unsigned long long _cacheSize;
    MSVLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;

- (void)dealloc;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)init;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void).cxx_destruct;
- (void)_clearCache;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_setCacheSize:(unsigned long long)a0 preserveExisting:(BOOL)a1;
- (void)_cacheArtworkRepresentation:(id)a0 forKey:(id)a1;

@end
