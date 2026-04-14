@class NSLock, NSString, AMSPurchaseQueueConfiguration, AMSBagKeySet, NSMutableSet, NSMutableArray, NSObject, AMSURLSession;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer> {
    AMSURLSession *_session;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSMutableArray *batches;
@property (retain) AMSPurchaseQueueConfiguration *config;
@property (retain) NSMutableSet *preAuthenticatedDSIDs;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property BOOL isSuspeneded;
@property (retain) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)_handleNextPurchase;
- (void)_processPurchase:(id)a0;
- (id)_performPreauthenticateForPurchaseTask:(id)a0;
- (id)enquePurchases:(id)a0;
- (void)setSuspended:(BOOL)a0 logUUID:(id)a1;

@end
