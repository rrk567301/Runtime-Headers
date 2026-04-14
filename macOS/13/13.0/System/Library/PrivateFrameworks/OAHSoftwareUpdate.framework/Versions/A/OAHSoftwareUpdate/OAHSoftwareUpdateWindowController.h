@class NSTextField, NSString, NSView, NSProgressIndicator, NSError, OAHSoftwareUpdateController, NSDictionary, NSLayoutConstraint, NSButton, NSWindow;

@interface OAHSoftwareUpdateWindowController : NSWindowController

@property BOOL useSheet;
@property (retain) NSWindow *parentWindow;
@property (weak) NSView *offerView;
@property (retain) NSView *downloadingView;
@property (weak) NSView *containerView;
@property (retain) NSView *errorView;
@property (weak) NSTextField *bodyTextField;
@property (weak) NSTextField *SURequiredTitleTextField;
@property (weak) NSButton *defaultButton;
@property (weak) NSButton *alternateButton;
@property (weak) NSButton *helpButton;
@property (weak) NSTextField *progressTitleTextField;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSTextField *statusTextField;
@property (weak) NSTextField *errorTitleTextField;
@property (weak) NSTextField *errorBodyTextField;
@property (retain) NSString *titleText;
@property (retain) NSString *bodyText;
@property (retain) NSView *currentSubView;
@property struct _NSModalSession { } *modalSession;
@property (weak) NSLayoutConstraint *statusTopConstraint;
@property (retain) NSError *error;
@property int windowCount;
@property (copy) id /* block */ finishedBlock;
@property (retain) OAHSoftwareUpdateController *softwareUpdateController;
@property (retain) NSDictionary *options;
@property (copy) id /* block */ updateCompletion;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)setupUI;
- (void)displayInstallingSheetForParentWindow:(id)a0 withOptions:(id)a1;
- (void)_setupBodyAndLicenseAgreement;
- (void)installButtonClicked:(id)a0;
- (void)notNowButtonClicked:(id)a0;
- (void)dismissWindow;
- (void)updateDownloadViewWithProgress:(id)a0;
- (void)_updateDownloadViewWithProgress:(id)a0;
- (void)transitionToView:(id)a0;
- (void)_transitionToView:(id)a0;
- (void)_addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;

@end
