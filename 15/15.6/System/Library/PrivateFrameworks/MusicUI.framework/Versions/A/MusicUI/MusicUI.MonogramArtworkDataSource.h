@interface MusicUI.MonogramArtworkDataSource : NSObject <MPArtworkDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_monogramRenderer;
    void /* unknown type, empty encoding */ rendererToken;
    void /* unknown type, empty encoding */ cache;
}

- (id)init;
- (void).cxx_destruct;
- (char)areRepresentationsAvailableForCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (char)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;

@end
