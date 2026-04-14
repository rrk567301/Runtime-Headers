@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    BOOL _isEnabled;
    BOOL _canSubscribe;
    BOOL _isSubscriber;
}

- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithStoreRequestContext:(id)a0;
- (void).cxx_destruct;
- (void)execute;

@end
