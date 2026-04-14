@class NSObject, AMSAuthenticateOptions, NSString, AMSAuthenticateMetrics, ACAccount, AMSDialogRequest, ACDAccountStore;
@protocol AMSBagProtocol, OS_nw_activity;

@interface AMSVerifyCredentialsTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate>

@property (readonly) BOOL accountWasOriginallyActive;
@property (retain) AMSDialogRequest *dialogRequest;
@property (retain) AMSAuthenticateMetrics *metrics;
@property (readonly) ACAccount *account;
@property (readonly) ACDAccountStore *accountStore;
@property (retain) NSObject<OS_nw_activity> *activity;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) AMSAuthenticateOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fetchSecondaryPasswordForAccount:(id)a0;
+ (void)_postAuthenticationBeganNotification;
+ (void)_postAuthenticationFailedNotification;
+ (void)_postAuthenticationFinishedNotification;
+ (void)_postAuthenticationSubmittedNotification;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (BOOL)AMSURLSession:(id)a0 task:(id)a1 shouldFailWithServerError:(id)a2;
- (id)performTask;
- (void)_removeRenewCredentialsFollowUp;
- (id)_cookieDictionaryFromAccount:(id)a0 url:(id)a1;
- (id)_createAuthenticateRequestEncoder;
- (id)_createAuthenticateRequestEncoderForAccount:(id)a0;
- (id)_createAuthenticateRequestForAccount:(id)a0 URL:(id)a1 requestEncoder:(id)a2;
- (id)_createAuthenticateRequestParametersForAccount:(id)a0;
- (id)_createUpdatedAccountWithAuthenticationResult:(id)a0;
- (long long)_expectedBiometricActionConstraint;
- (id)_generatePasswordIfNeeded;
- (void)_handleBiometricsForAuthenticatedAccount:(id)a0;
- (void)_handleDeviceOffersForAuthenticatedAccount:(id)a0;
- (void)_handleIDMSRetentionForAuthenticatedAccount:(id)a0;
- (id)_processAuthenticationFailureWithResult:(id)a0;
- (void)_processAuthenticationSuccessWithResult:(id)a0 authenticatedAccount:(id)a1;
- (id)_promiseOfAccountFromResult:(id)a0 orError:(id)a1;
- (void)_removeInactiveDuplicatesForAuthenticatedAccount:(id)a0;
- (void)_retainIDMS:(BOOL)a0 forAccount:(id)a1;
- (void)completeMetricsActivityWithPromise:(id)a0;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bag:(id)a2 options:(id)a3;
- (void)prepareMetricsActivity;

@end
