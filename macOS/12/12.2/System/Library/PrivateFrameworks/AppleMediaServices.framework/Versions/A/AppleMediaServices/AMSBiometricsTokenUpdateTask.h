@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSSecurityClientInterface, AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSURLSession *session;
@property BOOL shouldPromptUser;
@property (readonly) ACAccount *account;
@property (retain) NSDictionary *additionalDialogMetrics;
@property (retain) AMSProcessInfo *clientInfo;
@property (weak) id<AMSRequestPresentationDelegate> presentationDelegate;
@property BOOL shouldGenerateKeysOnly;
@property BOOL shouldRequestConfirmation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)performUpdate;
- (id)_sendRequestToDaemon;

@end
