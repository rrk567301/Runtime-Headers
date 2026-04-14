@class _PaymentSheetState, NSDictionary, AMSFinancePaymentSheetResponse, NSString, AMSPurchaseInfo, PKPaymentAuthorizationController, AMSPaymentSheetRequest, NSObject, AMSPromise, AKAppleIDAuthenticationContext, NSMutableArray, AMSPaymentSheetAssetCache;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain) AMSPaymentSheetAssetCache *assetCache;
@property (retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain) PKPaymentAuthorizationController *paymentAuthorizationController;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldCompanionAuthFallbackToPasswordForError:(id)a0;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)perform;
- (id)_paymentRequest;
- (float)_challengeSigningDelay;
- (void)_dismissPaymentAuthorizationController:(id)a0;
- (id)_metricsEvent;
- (BOOL)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)a0 purchaseResult:(id)a1 error:(id *)a2;
- (BOOL)_presentPaymentSheetWithPaymentRequest:(id)a0 error:(id *)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationWindowForPaymentAuthorizationController:(id)a0;

@end
