@class NSString, AMSBagKeySet, AMSPurchaseInfo, AMSURLSession;
@protocol AMSBagProtocol, AMSPurchaseDelegate;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property (readonly) AMSURLSession *session;
@property (weak) id<AMSPurchaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (id)_runDialogRequest:(id)a0;
- (id)_promptForAccount;
- (id)initWithPurchase:(id)a0 bag:(id)a1;
- (id)performPurchase;
- (void)generateFraudScoreWithInfo:(id)a0 bag:(id)a1;
- (BOOL)_shouldPreauthenticatePurchase:(id)a0;
- (id)_performPreauthenticate;
- (id)_performPurchaseWithError:(id *)a0;
- (id)_recordEngagementEventWithInfo:(id)a0 result:(id)a1 error:(id)a2;
- (id)_runAuthenticateRequest:(id)a0;
- (BOOL)_shouldAttemptCardEnrollment;

@end
