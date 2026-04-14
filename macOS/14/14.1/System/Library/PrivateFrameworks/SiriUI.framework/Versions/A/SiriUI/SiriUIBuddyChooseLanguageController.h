@class SiriUIBuddyController, SOSRSimpleLanguagePopUpButton, NSView, NSString, NSArray, NSButton;

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
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (id)buttonTitleForAmbiguousLanguage:(id)a0;
- (id)initWithParentController:(id)a0;
- (void)popupSelectionChanged:(id)a0;
- (void)radioButtonPressed:(id)a0;
- (id)selectedRecognitionLanguage;
- (void)willExitPane;

@end
