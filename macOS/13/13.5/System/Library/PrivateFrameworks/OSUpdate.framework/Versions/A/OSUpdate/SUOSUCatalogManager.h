@interface SUOSUCatalogManager : NSObject

- (id)serverURL;
- (id)_aliasesForInfo:(id)a0;
- (id)allProfilesFromInfo:(id)a0;
- (void)allTrainsAndAliasesWithCompletion:(id /* block */)a0;
- (void)allTrainsAndProfilesWithCompletion:(id /* block */)a0;
- (id)allTrainsFromInfo:(id)a0;
- (id)allTrainsFromInfoV2:(id)a0;
- (void)allTrainsWithCompletion:(id /* block */)a0;
- (void)cacheServerData:(id)a0;
- (id)cachedServerInfo;
- (void)installProfile:(id)a0 withCompletion:(id /* block */)a1;
- (id)lastUpdatedServerInfoDate;

@end
