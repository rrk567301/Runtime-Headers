@class NSView, NSButton;

@interface CPUI_EnrollmentWizardWindowController : NSWindowController

@property (retain) NSView *wizardContentView;
@property (retain) NSButton *nextButton;
@property (retain) NSButton *cancelButton;

- (void)windowDidLoad;
- (void).cxx_destruct;
- (void)buttonClicked:(id)a0;

@end
