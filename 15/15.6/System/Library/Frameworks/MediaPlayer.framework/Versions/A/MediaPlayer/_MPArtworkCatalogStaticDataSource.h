@class NSString;

@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;

- (char)areRepresentationsAvailableForCatalog:(id)a0;
- (char)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)existingRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1;
- (char)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1 completionHandler:(id /* block */)a2;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;

@end
