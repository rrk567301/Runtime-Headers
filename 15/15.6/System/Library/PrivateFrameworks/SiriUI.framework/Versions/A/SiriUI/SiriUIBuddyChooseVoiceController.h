@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, OBTemplateView, NSImage, SiriUIVoicePreviewManager, SiriUIVoicePickerTableView;

@interface SiriUIBuddyChooseVoiceController : NSViewController <SiriUIVoicePickerTableViewDelegate, SiriUIBuddySubviewController>

@property (weak) SiriUIVoicePickerTableView *voicePicker;
@property (weak) SiriUIBuddyController *parentController;
@property char userHasMadeSelection;
@property (retain) NSString *loadedLanguageCode;
@property (retain) SiriUIVoicePreviewManager *previewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_loadVoices;
- (void)_resetPicker;
- (void)_syncButtonStates;
- (id)initWithParentController:(id)a0 saeEnabled:(char)a1;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)voiceSelectionChanged:(id)a0;
- (void)willExitPane;

@end
