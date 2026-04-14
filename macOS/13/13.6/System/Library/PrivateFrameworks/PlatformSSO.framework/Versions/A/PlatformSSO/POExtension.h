@class NSString, SOExtension, POAgentWindowController, SORemoteExtensionViewController;
@protocol POExtensionDelegate;

@interface POExtension : NSObject <SOExtensionDelegate, POExtensionRegistrationProtocol> {
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
}

@property (retain) POAgentWindowController *agentWindow;
@property (weak) id<POExtensionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unload;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (void)registrationDidCompleteWithCompletion:(id /* block */)a0;
- (BOOL)canPerformRegistration;
- (id)initWithExtensionBundleIdentifier:(id)a0;

@end
