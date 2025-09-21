@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    char _includeKeybagSyncData;
    id _parsedResponse;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 buyParameters:(id)a1 includeKeybagSyncData:(char)a2;
- (id)initWithRequestContext:(id)a0 buyParametersString:(id)a1 includeKeybagSyncData:(char)a2;

@end
