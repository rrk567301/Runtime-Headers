@class AMSAuthenticateOptions, NSString, NSDictionary, AMSBagKeySet, NSUUID, NSNumber;
@protocol AMSBagProtocol, AMSAuthenticateTaskDelegate;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) NSDictionary *initialAuthenticationResults;
@property (retain) id<AMSBagProtocol> bag;
@property (weak) id<AMSAuthenticateTaskDelegate> delegate;
@property (readonly) AMSAuthenticateOptions *options;
@property (retain) NSString *password;
@property (retain) NSString *multiUserToken;
@property (retain) NSString *rawPassword;
@property (retain) NSString *altDSID;
@property (retain) NSNumber *DSID;
@property (retain) NSUUID *homeIdentifier;
@property (retain) NSUUID *homeUserIdentifier;
@property (retain) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_createFallbackBag;
+ (void)_updateAccountPasswordUsingSecondaryAccounts:(id)a0;
+ (BOOL)_loadCreateAppleIDwithClientInfo:(id)a0 bag:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)performAuthentication;
- (id)initWithAccount:(id)a0 options:(id)a1 bag:(id)a2;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)_accountForAuthenticationWithError:(id *)a0;
- (BOOL)_runCreateAccountDialogWithError:(id *)a0;
- (id)_attemptMultiUserTokenAuthenticationForAccount:(id)a0;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)a0 error:(id *)a1;
- (id)_createAuthKitUpdateTaskForAccount:(id)a0;
- (id)_performAuthenticationUsingAccount:(id)a0 credentialSource:(unsigned long long)a1 error:(id *)a2;
- (id)_sanitizeError:(id)a0;
- (id)_accountStoreForAuthentication;
- (void)_updateAccountWithProvidedInformation:(id)a0;
- (id)_runDialogRequest:(id)a0;
- (id)_handleDialogFromError:(id)a0;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1;
- (id)homeID;
- (void)setHomeID:(id)a0;

@end
