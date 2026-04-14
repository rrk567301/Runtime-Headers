@class MUIAppleIntelligenceOnboardingViewController, NSWindow;

@interface MUIAppleIntelligenceOnboardingWindowController : NSWindowController

@property (retain, nonatomic) MUIAppleIntelligenceOnboardingViewController *onboardingViewController;
@property (weak, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)windowDidLoad;
- (id)initWithWindow:(id)a0;
- (id)windowNibName;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)showOnboarding:(id)a0;
- (void)_mailAppleIntelligenceWelcomeViewControllerDidFinish:(id)a0;

@end
