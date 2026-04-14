@interface SUOSUCatalogManager : NSObject

- (id)allTrainsFromInfoV2:(id)a0;
- (void)allTrainsWithCompletion:(id /* block */)a0;
- (BOOL)updateCatalogWithServer:(id)a0;
- (BOOL)updateCatalogWithServer:(id)a0 withError:(id *)a1;

@end
