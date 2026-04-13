@class AMSLazyPromise, NSMutableDictionary, NSLock, NSMutableArray;

@interface AMSPurchaseBatch : NSObject

@property BOOL isComplete;
@property (retain) NSLock *lock;
@property (readonly) AMSLazyPromise *promise;
@property (readonly) NSMutableArray *purchases;
@property (readonly) NSMutableDictionary *purchaseMap;
@property (readonly) NSMutableArray *results;

- (void).cxx_destruct;
- (id)initWithPurchases:(id)a0 weakPromise:(id)a1;
- (id)purchaseForPurchaseId:(id)a0;
- (BOOL)finishPurchase:(id)a0 withError:(id)a1;
- (BOOL)finishPurchase:(id)a0 withResult:(id)a1;
- (id)nextPurchase;

@end
