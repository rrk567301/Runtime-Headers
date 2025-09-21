@class VUWGallery, PHPhotoLibrary, VCPPhotosPersistenceDelegate, VCPPhotosFaceProcessingContext;

@interface VCPFaceProcessingServiceWorker : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosFaceProcessingContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    VUWGallery *_gallery;
}

+ (float)_similarityScoreThreshold;
+ (id)allPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)workerWithPhotoLibrary:(id)a0 andContext:(id)a1;

- (void).cxx_destruct;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)personPromoterStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (id)_suggestionsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 error:(id *)a4;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (void)rebuildPersonsWithContext:(id)a0 reply:(id /* block */)a1 extendTimeout:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)reclusterFacesWithContext:(id)a0 reply:(id /* block */)a1 extendTimeout:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)a0 reply:(id /* block */)a1;
- (void)resetFaceClusteringStateWithContext:(id)a0 reply:(id /* block */)a1;
- (void)resetPersonPromoterStatusWithReply:(id /* block */)a0;
- (void)resetPersonsModelWithReply:(id /* block */)a0;
- (void)resetPetsModelWithReply:(id /* block */)a0;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 context:(id)a3 cancelOrExtendTimeoutBlock:(id /* block */)a4 reply:(id /* block */)a5;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 context:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 reply:(id /* block */)a4;
- (void)validateClusterCacheWithContext:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1 reply:(id /* block */)a2;

@end
