@class NSString, CDPStateController, CDPContext, CDPStateBaseUIController, NSWindow;

@interface CDPUIWalrusLocalPasscodeVerificationController : NSObject {
    CDPContext *_context;
    CDPStateController *_stateController;
    NSString *_title;
    CDPStateBaseUIController *_uiController;
    NSWindow *_window;
}

- (void).cxx_destruct;
- (void)_setupControllers;
- (id)initWithTitle:(id)a0 presentWithWindow:(id)a1;
- (void)finishWalrusLocalPasscodeVerificationWithCompletion:(id /* block */)a0;

@end
