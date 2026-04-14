@class NSTextField, IASFakeLinkButton, NSButton, NSWindow;

@interface SMBetaEnrollmentController : NSWindowController

@property (weak) NSWindow *baseWindow;
@property long long sourceBetaProgram;
@property (copy) id /* block */ resultBlock;
@property (weak) NSTextField *titleLabel;
@property (weak) NSTextField *descriptionLabel;
@property (weak) IASFakeLinkButton *learnMoreLinkButton;
@property (weak) NSButton *noButton;
@property (weak) NSButton *yesButton;

- (id)init;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)pressedNo:(id)a0;
- (void)pressedYes:(id)a0;
- (BOOL)shouldEnrollCurrentSystemIntoBetaToMatchSourceProgram:(long long)a0;
- (void)showSheetForBaseWindow:(id)a0 forEnrollingSource:(id)a1 intoSourceBetaProgram:(long long)a2 isCompulsory:(BOOL)a3 withEnrollmentResultBlock:(id /* block */)a4;

@end
