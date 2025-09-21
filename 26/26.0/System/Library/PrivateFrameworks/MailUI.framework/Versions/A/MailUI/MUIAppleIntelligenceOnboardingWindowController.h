@class MUIAppleIntelligenceOnboardingViewController, NSWindow;

@interface MUIAppleIntelligenceOnboardingWindowController : NSWindowController

@property (retain, nonatomic) MUIAppleIntelligenceOnboardingViewController *onboardingViewController;
@property (weak, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)windowNibName;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithWindow:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)showOnboarding:(id)a0;
- (void)_mailAppleIntelligenceWelcomeViewControllerDidFinish:(id)a0;

@end
