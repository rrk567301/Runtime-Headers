@class NSString, NSArray, NSUUID, SORemoteExtensionViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue, SOExtensionDelegate;

@interface SOExtension : NSObject <SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol> {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
}

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (readonly, nonatomic) long long extensionRequestsMode;
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (weak, nonatomic) id<SOExtensionDelegate> extensionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)unload;
- (BOOL)isEqualToExtension:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (id)initWithExtension:(id)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (void)authorizationDidCompleteWithCredential:(id)a0 error:(id)a1;
- (void)requestReauthenticationWithCompletion:(id /* block */)a0;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)registrationDidComplete;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_setupExtension;
- (void)setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)_finishAuthorizationWithCompletion:(id /* block */)a0;
- (void)_setupNonUISessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_finishedSettingUpSession:(id)a0;
- (void)_setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (void)_setupSessionHelperForOSXWithCompletion:(id /* block */)a0;
- (void)_setupRemoteViewControllerWithCompletionBlock:(id /* block */)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)_contextForSession;
- (struct { unsigned int x0[8]; })auditTokenForSession;
- (void)checkAssociatedDomains;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;
- (BOOL)hasAssociatedDomainsApproved;

@end
