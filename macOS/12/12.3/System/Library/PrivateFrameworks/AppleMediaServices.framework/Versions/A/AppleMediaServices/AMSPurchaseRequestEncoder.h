@class NSObject, AMSPurchaseInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {
    id<AMSBagProtocol> _bag;
}

@property (readonly) AMSPurchaseInfo *purchaseInfo;
@property (retain) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (void)configureRequest:(id)a0 purchaseInfo:(id)a1 bag:(id)a2 error:(id *)a3;
+ (id)_parametersFromPurchaseInfo:(id)a0 error:(id *)a1;
+ (long long)_anisetteTypeFromAccount:(id)a0;

- (void).cxx_destruct;
- (id)bag;
- (void)setBag:(id)a0;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)_bagURLWithError:(id *)a0;
- (id)_buyProductURLKeysForProductType:(id)a0 prefix:(id)a1;
- (id)_bagURLKeysForPurchaseType:(long long)a0 prefix:(id)a1;
- (id)_bagURLKeys;
- (id)initWithPurchaseInfo:(id)a0;
- (id)encodeRequest;

@end
