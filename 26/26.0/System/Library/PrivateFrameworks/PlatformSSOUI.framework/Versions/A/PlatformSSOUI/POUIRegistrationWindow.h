@class OBTemplateContainerViewController, NSString, POAgentWindowController, NSWindow;
@protocol POUIRegistrationUIDelegate;

@interface POUIRegistrationWindow : NSObject <POExtensionDelegate, POUIRegistrationUIProvider>

@property (retain) OBTemplateContainerViewController *registrationViewController;
@property (retain) POAgentWindowController *agentWindowController;
@property long long agentWindowNumber;
@property (retain, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<POUIRegistrationUIDelegate> delegate;
@property (readonly) NSWindow *window;

- (void)close;
- (void).cxx_destruct;
- (void)windowDidClose;
- (void)continueDeviceRegistration:(id)a0;
- (void)continueUserRegistration:(id)a0;
- (void)enableRegistrationControls;
- (void)exitDeviceRegistration:(id)a0;
- (void)exitRegistration:(id)a0;
- (void)exitUserRegistration:(id)a0;
- (void)requestSmartCardForBindingWithCompletion:(id /* block */)a0;
- (void)requestUserAuthenticationSyncPassword:(BOOL)a0 completion:(id /* block */)a1;
- (void)showFinishRegistrationWithSuccess:(BOOL)a0 context:(id)a1 message:(id)a2;
- (void)showRegistrationUI:(id)a0;
- (void)showRegistrationWithStatus:(id)a0;
- (void)makeRegistrationContainerViewController:(id)a0;

@end
