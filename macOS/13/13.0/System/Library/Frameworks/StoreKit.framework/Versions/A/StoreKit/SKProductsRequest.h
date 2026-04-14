@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_start;
- (id)initWithProductIdentifiers:(id)a0;
- (id)_newResponseForProducts:(id)a0 invalidIdentifiers:(id)a1;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1;
- (void)_startWithCompletionHandler:(id /* block */)a0;

@end
