@class AMSPaymentSheetAssetCache, NSString, AMSFinancePaymentSheetResponse, AMSPurchaseInfo, NSDictionary, AMSPaymentSheetRequest, NSObject, AMSPromise, AKAppleIDAuthenticationContext, NSMutableArray, _PaymentSheetState;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask

@property (retain) AMSPaymentSheetAssetCache *assetCache;
@property (retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain) AMSPromise *paymentSheetPromise;
@property (readonly) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (retain) NSObject<OS_dispatch_queue> *presentationQueue;
@property (readonly) AMSPaymentSheetRequest *request;
@property (retain) _PaymentSheetState *state;
@property (retain) NSMutableArray *userActions;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *metricsDictionary;
@property (copy) NSString *presentingSceneBundleIdentifier;
@property (copy) NSString *presentingSceneIdentifier;
@property (retain) AMSPurchaseInfo *purchaseInfo;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)perform;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
