@class NSString, MPCMediaRemoteController;

@interface MPCMRRemoteArtworkDataSource : NSObject <MPArtworkDataSource>

@property (readonly, weak, nonatomic) MPCMediaRemoteController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithController:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void).cxx_destruct;

@end
