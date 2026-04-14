@class AMSPurchaseSIWA, NSUUID, AKAuthorization, NSError, AKCredentialRequestContext;

@interface AMSPurchaseSIWATask : AMSPurchaseTask

@property (retain, nonatomic) AMSPurchaseSIWA *purchaseSIWA;
@property (retain, nonatomic) AKCredentialRequestContext *requestContext;
@property (copy, nonatomic) NSUUID *continuationRequestIdentifier;
@property (copy, nonatomic) NSError *siwaError;
@property (nonatomic) BOOL purchaseRequiresAuthorization;
@property (retain, nonatomic) AKAuthorization *authorization;

- (void).cxx_destruct;
- (id)_cancelAuthorization;
- (void)performPreActionRequestForTaskInfo:(id)a0 requiresAuthorization:(BOOL)a1 error:(id *)a2;
- (BOOL)_willRequireAskToBuyForTaskInfo:(id)a0;
- (BOOL)_beginAuthorizationWasPerformed;
- (id)_beginAuthorization;
- (id)performPreauthenticate;
- (id)preauthenticateOptions;
- (BOOL)_siwaDidCommence;
- (id)_continueAuthorization;
- (id)newAuthorizationController;
- (void)_updateRequestContextWithPurchaseInfo:(id)a0;
- (id)initWithPurchaseSIWA:(id)a0 bag:(id)a1;
- (id)performPurchaseSIWA;

@end
