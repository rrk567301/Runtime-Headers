@class NSSet, NSError, SKProductsResponse;
@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (readonly) NSSet *_productIdentifiers;
@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)_start;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1;
- (void)_startWithCompletionHandler:(void (^)(SKProductsResponse *, NSError *))a0;
- (id)initWithProductIdentifiers:(id)a0;

@end
