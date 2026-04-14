@class NSString, NSArray, NSUUID, SORemoteExtensionViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue, SOExtensionDelegate;

@interface SOExtension : NSObject {
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
@property (weak, nonatomic) id<SOExtensionDelegate> extensionDelegate;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)unload;
- (BOOL)isEqualToExtension:(id)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (id)initWithExtension:(id)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (void)authorizationDidCompleteWithCredential:(id)a0 error:(id)a1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_setupExtension;
- (void)_setupNonUISessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)_contextForSession;
- (void)_finishAuthorizationWithCompletion:(id /* block */)a0;
- (void)_setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (void)_setupSessionHelperForOSXWithCompletion:(id /* block */)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupRemoteViewControllerWithCompletionBlock:(id /* block */)a0;
- (BOOL)hasAssociatedDomainsApproved;
- (void)setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)_finishedSettingUpSession:(id)a0;
- (struct { unsigned int x0[8]; })auditTokenForSession;
- (void)checkAssociatedDomains;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;

@end
