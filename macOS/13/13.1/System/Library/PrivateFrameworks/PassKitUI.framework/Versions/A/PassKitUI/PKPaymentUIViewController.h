@class PKInAppPaymentService, NSArray, NSViewController, NSString, PKPaymentRequest;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentUIViewController : NSViewController <PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceProtocol>

@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService;
@property (retain, nonatomic) NSViewController *activeViewController;
@property (retain, nonatomic) NSArray *activeViewConstraints;
@property (copy, nonatomic) id /* block */ pendingPrepareCompletionBlock;
@property (nonatomic) unsigned int sleepAssertionID;
@property (nonatomic) BOOL delayingSleep;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) id serviceDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (id)hostContext;
- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void)handleHostApplicationDidCancel;
- (void)prepareWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)a0;
- (void)authorizationDidPresent;
- (void)authorizationWillStart;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (id)_hostApplicationIdentifier;
- (id)hostContextWithErrorHandler:(id /* block */)a0;
- (id)_hostBundleIdentifier;
- (id)layoutConstraintsForChildView:(id)a0;
- (id)_serviceViewController;
- (id)_hostApplicationName;
- (id)paymentUIViewController:(id)a0;

@end
