@class SORemoteExtensionViewController, NSString, NSArray, POAgentWindowController, SOExtension, NSNumber, NSWindow;
@protocol POExtensionDelegate;

@interface POExtension : NSObject <SOExtensionDelegate> {
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
}

@property (retain) NSWindow *registrationSheet;
@property (weak) id<POExtensionDelegate> delegate;
@property (readonly, nonatomic) NSNumber *sdkVersionString;
@property (readonly) NSString *containerAppBundleIdentifier;
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (retain) POAgentWindowController *agentWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)protocolVersion;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)unload;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(long long)a2 extensionData:(id)a3 completion:(id /* block */)a4;
- (void)beginDeviceRegistrationUsingOptions:(long long)a0 extensionData:(id)a1 completion:(id /* block */)a2;
- (void)displayNamesForGroups:(id)a0 extensionData:(id)a1 completion:(id /* block */)a2;
- (void)registrationDidCompleteWithCompletion:(id /* block */)a0;
- (void)profilePictureForUserUsingExtensionData:(id)a0 completion:(id /* block */)a1;
- (void)close;
- (void).cxx_destruct;
- (void)registrationDidCancelWithCompletion:(id /* block */)a0;
- (void)authorizationDidFailWithOtherVersionError:(id)a0;
- (id)supportedDeviceEncryptionAlgorithms;
- (id)supportedDeviceSigningAlgorithms;
- (long long)supportedGrantTypes;
- (id)supportedUserSecureEnclaveKeySigningAlgorithms;
- (void)_unload;
- (BOOL)canPerformRegistration;
- (id)initWithExtensionBundleIdentifier:(id)a0 delegate:(id)a1;
- (id)initWithExtensionBundleIdentifier:(id)a0 extensionManager:(id)a1 delegate:(id)a2;
- (void)keyWillRotateForKeyType:(long long)a0 newKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 extensionData:(id)a2 completion:(id /* block */)a3;
- (void)presentAuthorizationViewControllerInWindow:(id)a0 hints:(id)a1 completion:(id /* block */)a2;

@end
