@interface MusicUI.MonogramArtworkDataSource : NSObject <MPArtworkDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_monogramRenderer;
    void /* unknown type, empty encoding */ rendererToken;
    void /* unknown type, empty encoding */ cache;
}

- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)init;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void).cxx_destruct;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;

@end
