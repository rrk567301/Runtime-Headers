@class MUIAppleIntelligenceOnboardingViewController, NSWindow;

@interface MUIAppleIntelligenceOnboardingWindowController : NSWindowController

@property (retain, nonatomic) MUIAppleIntelligenceOnboardingViewController *onboardingViewController;
@property (weak, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)windowNibName;
- (id)initWithWindow:(id)a0;
- (void)windowDidLoad;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)showOnboarding:(id)a0;
- (void)_mailAppleIntelligenceWelcomeViewControllerDidFinish:(id)a0;

@end
