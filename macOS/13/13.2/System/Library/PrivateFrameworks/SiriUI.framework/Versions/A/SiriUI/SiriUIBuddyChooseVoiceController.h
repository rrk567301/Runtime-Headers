@class SiriUIBuddyController, NSString, SiriUIVoicePreviewManager, SiriUIVoicePickerTableView, NSArray;

@interface SiriUIBuddyChooseVoiceController : NSViewController <SiriUIVoicePickerTableViewDelegate, SiriUIBuddySubviewController>

@property (weak) SiriUIVoicePickerTableView *voicePicker;
@property (weak) SiriUIBuddyController *parentController;
@property BOOL userHasMadeSelection;
@property (retain) NSString *loadedLanguageCode;
@property (retain) SiriUIVoicePreviewManager *previewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)willExitPane;
- (id)initWithParentController:(id)a0;
- (void)_syncButtonStates;
- (void)voiceSelectionChanged:(id)a0;
- (void)_resetPicker;
- (void)_loadVoices;

@end
