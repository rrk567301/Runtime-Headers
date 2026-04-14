@class NSString, AMSPurchaseQueueBatchList, AMSBagKeySet, AMSPurchaseQueueConfiguration, NSObject, AMSThreadSafeSet;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSPurchaseQueueBatchList *batches;
@property (retain) AMSPurchaseQueueConfiguration *config;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) AMSThreadSafeSet *preAuthenticatedDSIDs;
@property (getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)enquePurchases:(id)a0;
- (id)_createPurchasePromiseForTask:(id)a0 purchase:(id)a1;
- (void)_handleNextPurchase;
- (void)_handleResult:(id)a0 error:(id)a1 forPurchase:(id)a2;
- (id)_performPreauthenticateForPurchaseTask:(id)a0;
- (id)_processPurchase:(id)a0;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)setSuspended:(BOOL)a0 logUUID:(id)a1;

@end
