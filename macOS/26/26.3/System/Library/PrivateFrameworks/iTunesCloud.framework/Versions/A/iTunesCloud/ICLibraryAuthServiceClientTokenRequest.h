@class ICStoreRequestContext, ICLibraryAuthServiceClientTokenResponse;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithStoreRequestContext:(id)a0;
- (void).cxx_destruct;
- (void)execute;

@end
