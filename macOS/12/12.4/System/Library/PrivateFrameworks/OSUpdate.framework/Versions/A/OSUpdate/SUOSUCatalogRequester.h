@interface SUOSUCatalogRequester : NSObject

+ (id)_APIBaseURL;
+ (void)getRequestLivabilitySPIWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)fetchServerDefinitionsWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)fetchAudienceTypesForTrain:(id)a0 completion:(id /* block */)a1;

@end
