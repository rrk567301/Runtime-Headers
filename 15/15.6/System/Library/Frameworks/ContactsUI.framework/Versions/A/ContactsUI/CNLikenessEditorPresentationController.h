@class CNContact, NSView, NSLayoutConstraint, NSButton;
@protocol CNLikenessEditorPresentationStrategy;

@interface CNLikenessEditorPresentationController : CNAvatarEditorViewController

@property (retain) NSView *editorAreaView;
@property (retain) NSButton *deleteButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *actionButton;
@property (copy) id /* block */ actionButtonBlock;
@property (retain) CNContact *contact;
@property char isMe;
@property char isNewLikeness;
@property long long imageSource;
@property (retain) NSLayoutConstraint *editorWidthConstraint;
@property (retain, nonatomic) id<CNLikenessEditorPresentationStrategy> presentationStrategy;
@property (nonatomic) char userSetup;
@property (nonatomic) char allowEditingMemojiAndMonogramOnly;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)cancel;
- (void)save;
- (void)loadView;
- (void)setNextButtonAction:(id /* block */)a0;
- (char)isBuddy;
- (id)_deletionStringForLikeness:(id)a0;
- (double)_topInsetForViewController:(id)a0;
- (void)actionButton:(id)a0;
- (void)cancelButton:(id)a0;
- (void)configureEditorForLikeness:(id)a0 type:(unsigned long long)a1;
- (void)configureLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(char)a3;
- (void)configureRecentsEditor;
- (void)deleteButton:(id)a0;
- (id)initWithSettingsDelegate:(id)a0;
- (char)isBackwardsNavigationEnabled;
- (void)setAvatarPickerAsActiveViewController;
- (void)setNextButtonEnabled:(char)a0;
- (void)setNextButtonTitle:(id)a0;
- (void)setReadyToSave;
- (void)setupEditorViewForAvatarPicker;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(char)a3;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(char)a3 imageSource:(long long)a4;
- (void)showRecentsEditorOnView:(id)a0 forContact:(id)a1 isMe:(char)a2;
- (void)updateButtonsWithLikeness:(id)a0;

@end
