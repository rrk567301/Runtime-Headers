@class ICMClickableTextView, NSString, NSView, ICNote, NSTouchBar, ICMNoteEditorController, LAUIAuthenticationViewController;
@protocol ICMPasswordEntryViewControllerDelegate;

@interface ICMPasswordEntryViewController : NSViewController <LAUIAuthenticationViewControllerDelegate, ICMClickableTextViewDelegate>

@property (retain, nonatomic) LAUIAuthenticationViewController *localAuthVC;
@property (weak, nonatomic) NSView *backgroundView;
@property (weak, nonatomic) NSView *authVCContainerView;
@property (retain, nonatomic) ICMClickableTextView *learnMoreTextView;
@property (copy, nonatomic) NSString *authSubtitle;
@property (copy, nonatomic) NSString *authSubtitleNoBiometry;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (retain, nonatomic) NSString *accountPassword;
@property (retain, nonatomic) NSString *overrideSubtitle;
@property (nonatomic) char correctPasswordEntered;
@property (nonatomic) char isShowingDivergedDialogue;
@property (nonatomic) char shouldPasswordFieldBecomeFirstResponderAfterFolderExpansion;
@property (retain, nonatomic) id retainedSelf;
@property (nonatomic) char biometricInhibitUpdateScheduled;
@property (retain, nonatomic) NSTouchBar *emptyTouchBar;
@property (weak, nonatomic) id<ICMPasswordEntryViewControllerDelegate> passwordEntryDelegate;
@property (retain, nonatomic) ICNote *note;
@property (weak, nonatomic) ICMNoteEditorController *editorController;
@property (nonatomic) char isAuxiliaryEditor;
@property (nonatomic) char inhibitTouchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)doCommandBySelector:(SEL)a0;
- (void)viewDidLoad;
- (void)windowDidBecomeKey:(id)a0;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)cancelAuthentication;
- (char)attemptToUnlockWithPassword:(id)a0;
- (void)authAttemptFailed;
- (void)authenticationDidSuccceed;
- (char)cmdEnterOrReturnPressed;
- (void)focusPasswordField;
- (void)setupAccessibility;
- (void)clickableTextViewDidClick:(id)a0;
- (void)showUpdateDivergedPasswordSheetForNotePassword:(id)a0 accountPassword:(id)a1;
- (void)_icaxRecursivelySetLinkedUIElements:(id)a0 forElement:(id)a1;
- (void)folderListDidExpand:(id)a0;
- (void)folderListWillExpand:(id)a0;
- (void)hideLearnMoreLink;
- (id)initWithNote:(id)a0 isAuxiliaryEditor:(char)a1 passwordEntryDelegate:(id)a2;
- (void)setUpForPasswordEntry;
- (void)showLearnMoreLink;
- (void)touchIDEnabledDidChange:(id)a0;
- (void)updateInhibitBiometrics;
- (void)updateLocalAuthController;

@end
