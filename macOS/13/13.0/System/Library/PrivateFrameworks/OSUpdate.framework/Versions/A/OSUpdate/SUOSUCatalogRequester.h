@interface SUOSUCatalogRequester : NSObject

+ (id)_APIBaseURL;
+ (void)fetchServerDefinitionsWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)fetchAudienceTypesForTrain:(id)a0 completion:(id /* block */)a1;
+ (void)getRequestLivabilitySPIWithURL:(id)a0 completion:(id /* block */)a1;

@end
