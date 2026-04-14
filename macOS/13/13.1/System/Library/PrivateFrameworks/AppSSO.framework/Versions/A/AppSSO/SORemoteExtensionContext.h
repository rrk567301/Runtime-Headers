@class SOExtensionViewService, NSString, ASAuthorizationProviderExtensionAuthorizationRequest, ASAuthorizationProviderExtensionLoginManager, SOExtensionServiceConnection;
@protocol POExtensionRegistrationProtocol, ASAuthorizationProviderExtensionRegistrationHandler, ASAuthorizationProviderExtensionAuthorizationRequestHandler;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler, POExtensionRegistrationProtocol> _extensionAuthorizationRequestHandler;
    id /* block */ _finishAuthorizationCompletion;
}

@property (weak) SOExtensionViewService *viewService;
@property (readonly, nonatomic) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler, ASAuthorizationProviderExtensionRegistrationHandler> extensionViewController;
@property (readonly, nonatomic) ASAuthorizationProviderExtensionLoginManager *extensionLoginManager;
@property (readonly, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *extensionAuthorizationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)registrationDidComplete;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (BOOL)canOpenURL:(id)a0;
- (id)authorizationRequestHandlerWithRequestParameters:(id)a0 error:(id *)a1;
- (id)extensionAuthorizationRequestHandlerWithError:(id *)a0;
- (id)hostContextWithError:(id *)a0;
- (id)synchronousHostContextWithError:(id *)a0;
- (void)completeFinishAuthorizationWithError:(id)a0;
- (void)_disableAppSSOInCFNetwork;

@end
