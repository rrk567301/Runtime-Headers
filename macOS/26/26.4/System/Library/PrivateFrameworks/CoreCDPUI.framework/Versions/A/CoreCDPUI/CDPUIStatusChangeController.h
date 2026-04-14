@class NSWindow;
@protocol CDPUIStatusChangeModel;

@interface CDPUIStatusChangeController : NSObject

@property (readonly, nonatomic) id<CDPUIStatusChangeModel> model;
@property (retain, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) id /* block */ userActionCallback;
@property (copy, nonatomic) id /* block */ completionCallback;

+ (id)controllerWithTargetWebAccessStatus:(unsigned long long)a0;
+ (id)controllerWithTargetWalrusStatus:(unsigned long long)a0;
+ (id)controllerWithTargetWalrusStatus:(unsigned long long)a0 altDSID:(id)a1;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)presentWithKeyWindow:(id)a0;
- (void)presentWithKeyWindow:(id)a0;
- (id)_configureAlert;
- (id)_configureAlert;
- (void)authenticate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_alertWithKeyWindow:(id)a0;
- (void)_alertWithKeyWindow:(id)a0;
- (id)_configurePasscodeVerificationControllerWithKeyWindow:(id)a0;
- (id)_configurePasscodeVerificationControllerWithWindow:(id)a0;
- (BOOL)_configurePresentingUIForAuthProvider:(id)a0;
- (void)_handleBuddyFlow;
- (void)_handleBuddyFlow;
- (void)_handleEnablementError:(id)a0 forChoice:(unsigned long long)a1;
- (void)_handleUserChoice:(unsigned long long)a0;
- (void)_handleUserChoice:(unsigned long long)a0 error:(id)a1;
- (void)_passcodeVerificationFlowWithWindow:(id)a0;
- (void)_passcodeVerificationflowWithKeyWindow:(id)a0;
- (void)_presentAlert:(id)a0 from:(id)a1;
- (void)_presentAlert:(id)a0 from:(id)a1;

@end
