@class VUIPurchaseRequest, NSString, AMSPurchaseQueue, NSMutableSet;

@interface VUIPurchaser : NSObject <AMSPurchaseResponseProtocol>

@property (retain, nonatomic) NSMutableSet *purchasingParamsSet;
@property (retain, nonatomic) AMSPurchaseQueue *purchaseQueue;
@property (retain, nonatomic) VUIPurchaseRequest *interruptedPurchaseRequest;
@property (readonly, nonatomic) BOOL isPurchaseInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)presentingViewController;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)enqueuePurchase:(id)a0 withCompletion:(id /* block */)a1;
- (void)postCrossProcessNotificationWithBuyParams:(id)a0 error:(id)a1;
- (BOOL)isPurchasing:(id)a0;
- (void)rememberPurchasing:(id)a0;
- (void)forgetPurchasing:(id)a0;
- (void)didCompleteInterruptedBuyWithResponse:(id)a0 error:(id)a1;
- (id)_getAdamIdFromBuyParams:(id)a0;

@end
