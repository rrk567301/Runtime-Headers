@class NSArray, NSMutableArray, NSNumber;

@interface CKPurchaseController : CKServiceInterface {
    NSMutableArray *_purchases;
    NSMutableArray *_rejectedPurchases;
    NSArray *_adoptionEligibleItems;
    NSNumber *_adoptionServerStatus;
    NSNumber *_adoptionErrorNumber;
}

@property (copy) id /* block */ dialogHandler;

+ (id)sharedPurchaseController;
+ (void)setNeedsSilentMachineAuthorization:(BOOL)a0;

- (void).cxx_destruct;
- (void)performPurchase:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)startPurchases:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)startPurchases:(id)a0 shouldStartDownloads:(BOOL)a1 eventHandler:(id /* block */)a2;
- (void)resumeDownloadForPurchasedProductID:(id)a0;
- (void)cancelPurchaseWithProductID:(id)a0;
- (id)purchasesInProgress;
- (id)purchaseInProgressForProductID:(id)a0;
- (void)checkServerDownloadQueue;
- (void)_performVPPReceiptRenewal;
- (BOOL)adoptionCompletedForBundleID:(id)a0;

@end
