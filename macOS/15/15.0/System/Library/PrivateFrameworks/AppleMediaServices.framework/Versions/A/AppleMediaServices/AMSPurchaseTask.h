@class NSString, AMSBagKeySet, AMSPurchaseInfo, AMSURLSession, AMSPurchaseRequestEncoder;
@protocol AMSBagProtocol, AMSPurchaseDelegate;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSPurchaseInfo *purchaseInfo;
@property (retain) AMSPurchaseRequestEncoder *purchaseRequestEncoder;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property (retain) AMSPurchaseRequestEncoder *purchaseRequestEncoder;
@property (readonly) AMSURLSession *session;
@property (weak) id<AMSPurchaseDelegate> delegate;
@property (retain) Class paymentSheetTaskClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_filterResponseDictionary:(id)a0;
+ (id)createBagForSubProfile;
+ (id)engagementEventWithInfo:(id)a0 responseDictionary:(id)a1 error:(id)a2;
+ (BOOL)shouldPreauthenticatePurchaseWithInfo:(id)a0;

- (void).cxx_destruct;
- (id)performPurchase;
- (BOOL)performPreActionRequestForTaskInfo:(id)a0 requiresAuthorization:(BOOL)a1 error:(id *)a2;
- (id)_promptForAccount;
- (id)_recordEngagementEventWithInfo:(id)a0 responseDictionary:(id)a1 error:(id)a2;
- (id)_runAuthenticateRequest:(id)a0;
- (id)_runDialogRequest:(id)a0;
- (BOOL)_shouldAttemptCardEnrollment;
- (BOOL)_shouldGenerateAFDSWithPurchaseInfo:(id)a0;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)generateFDSWithInfo:(id)a0 bag:(id)a1;
- (id)initWithPurchase:(id)a0 bag:(id)a1;
- (id)performPreauthenticate;
- (id)performPurchaseRequest;
- (id)preauthenticateOptions;

@end
