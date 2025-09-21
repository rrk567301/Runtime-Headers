@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    char _isEnabled;
    char _canSubscribe;
    char _isSubscriber;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
