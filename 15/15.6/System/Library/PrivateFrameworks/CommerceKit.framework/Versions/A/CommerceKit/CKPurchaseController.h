@class NSArray, NSMutableArray, NSNumber;

@interface CKPurchaseController : CKServiceInterface {
    NSMutableArray *_purchases;
    NSMutableArray *_rejectedPurchases;
    NSArray *_adoptionEligibleItems;
    NSNumber *_adoptionServerStatus;
    NSNumber *_adoptionErrorNumber;
}

@property (copy) id /* block */ dialogHandler;

+ (void)setNeedsSilentMachineAuthorization:(char)a0;
+ (id)sharedPurchaseController;

- (void).cxx_destruct;
- (id)purchaseInProgressForProductID:(id)a0;
- (void)_performVPPReceiptRenewal;
- (char)adoptionCompletedForBundleID:(id)a0;
- (void)cancelPurchaseWithProductID:(id)a0;
- (void)checkServerDownloadQueue;
- (void)performPurchase:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)purchasesInProgress;
- (void)resumeDownloadForPurchasedProductID:(id)a0;
- (void)startPurchases:(id)a0 shouldStartDownloads:(char)a1 eventHandler:(id /* block */)a2;
- (void)startPurchases:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
