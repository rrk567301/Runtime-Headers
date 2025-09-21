@class NSObject, AMSPurchaseInfo;
@protocol OS_dispatch_queue;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder

@property (readonly) AMSPurchaseInfo *purchaseInfo;
@property (retain) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (id)_buyProductURLKeysForProductType:(id)a0 prefix:(id)a1;
+ (id)_bagURLKeysForPurchaseType:(long long)a0 withProductType:(id)a1 purchase:(id)a2 prefix:(id)a3;
+ (id)_bagURLKeysFromPurchaseInfo:(id)a0;
+ (long long)_anisetteTypeFromAccount:(id)a0;
+ (id)bagURLFromPurchaseInfo:(id)a0 bag:(id)a1;
+ (id)configureRequest:(id)a0 purchaseInfo:(id)a1 bag:(id)a2;
+ (id)_parametersFromPurchaseInfo:(id)a0;

- (id)encodeRequest;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)initWithPurchaseInfo:(id)a0;
- (void).cxx_destruct;

@end
