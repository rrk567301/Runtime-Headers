@class CNContact, NSView, CNRecentLikenessesViewController, NSLayoutConstraint, NSButton, NSString;
@protocol CNLikenessEditorPresentationStrategy;

@interface CNLikenessEditorPresentationController : CNAvatarEditorViewController <CNRecentLikenessesViewDelegate>

@property (retain) CNRecentLikenessesViewController *recentsViewController;
@property (retain) NSView *editorAreaView;
@property (retain) NSButton *deleteButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *actionButton;
@property (copy) id /* block */ actionButtonBlock;
@property (retain) CNContact *contact;
@property BOOL isMe;
@property BOOL isNewLikeness;
@property long long imageSource;
@property (retain) NSLayoutConstraint *editorWidthConstraint;
@property (retain, nonatomic) id<CNLikenessEditorPresentationStrategy> presentationStrategy;
@property (nonatomic) BOOL userSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadView;
- (void)save;
- (void)setNextButtonAction:(id /* block */)a0;
- (id)initWithSettingsDelegate:(id)a0;
- (void)setupEditorViewForAvatarPicker;
- (void)configureLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3;
- (void)configureEditorForLikeness:(id)a0 type:(unsigned long long)a1;
- (void)setAvatarPickerAsActiveViewController;
- (id)_deletionStringForLikeness:(id)a0;
- (void)configureRecentsEditor;
- (void)setReadyToSave;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3;
- (void)recentLikenessesViewController:(id)a0 beginEditingLikeness:(id)a1;
- (void)addNewLikenessRecentLikenessesViewController:(id)a0;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3 imageSource:(long long)a4;
- (double)_topInsetForViewController:(id)a0;
- (void)updateButtonsWithLikeness:(id)a0;
- (void)showRecentsEditorOnView:(id)a0 forContact:(id)a1 isMe:(BOOL)a2;
- (void)saveAsNewPrimaryLikeness:(id)a0;
- (void)actionButton:(id)a0;
- (void)cancelButton:(id)a0;
- (void)deleteButton:(id)a0;
- (void)setNextButtonEnabled:(BOOL)a0;
- (void)setNextButtonTitle:(id)a0;
- (BOOL)isBackwardsNavigationEnabled;
- (BOOL)isBuddy;

@end
