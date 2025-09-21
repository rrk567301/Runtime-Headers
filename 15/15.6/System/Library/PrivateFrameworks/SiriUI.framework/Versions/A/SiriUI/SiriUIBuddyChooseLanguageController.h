@class SOSRSimpleLanguagePopUpButton, NSView, NSString, NSArray, SiriUIBuddyController, NSAttributedString, OBTemplateView, NSImage, NSButton;

@interface SiriUIBuddyChooseLanguageController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (weak) NSView *ambiguousLangageContainer;
@property (weak) NSButton *languageOneButton;
@property (weak) NSButton *languageTwoButton;
@property (weak) NSView *unsupportedLangageContainer;
@property (weak) SOSRSimpleLanguagePopUpButton *languagePopUp;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) char saeEnabled;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSImage *topImage;
@property (readonly) OBTemplateView *templateView;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) NSString *templateNextButtonTitle;
@property (readonly) NSString *templatePreviousButtonTitle;
@property (readonly) NSAttributedString *templateAttributedBodyText;
@property (readonly) char needsExtraWideContent;
@property (readonly) char isInitialSubState;
@property (readonly) char shouldDisableNextButton;
@property (readonly) id /* block */ templateAlternateActionBlock;
@property (readonly) id /* block */ templatePreviousButtonActionBlock;
@property (readonly) id /* block */ templateNextButtonActionBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (id)buttonTitleForAmbiguousLanguage:(id)a0;
- (id)initWithParentController:(id)a0 saeEnabled:(char)a1;
- (void)popupSelectionChanged:(id)a0;
- (void)radioButtonPressed:(id)a0;
- (id)selectedRecognitionLanguage;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)willExitPane;

@end
