@class CNAvatarPickerViewController, NSViewController, CNMutableContact, CNPhotoLikenessEditorViewController;
@protocol CNAvatarEditorDelegate;

@interface CNAvatarEditorViewController : NSViewController <CNLikenessEditorHostDelegate>

@property (weak) NSViewController *activeViewController;
@property (retain) CNPhotoLikenessEditorViewController *photoLikenessEditor;
@property (retain, nonatomic) CNAvatarPickerViewController *avatarPickerViewController;
@property (retain) CNMutableContact *editorContact;
@property (weak) id<CNAvatarEditorDelegate> delegate;

+ (id)log;

- (void)cancel:(id)a0;
- (void)save;
- (void)loadView;
- (id)contact;
- (void)cancel;
- (void)save:(id)a0;
- (void)setContact:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)setWindowTitle:(id)a0;
- (void)setNextButtonAction:(id /* block */)a0;
- (void)setPreviousButtonAction:(id /* block */)a0;
- (id)likeness;
- (BOOL)isBuddy;
- (void)setActiveViewController:(id)a0 inView:(id)a1;
- (id)activeEditorController;
- (BOOL)allowEditingMemojiAndMonogramOnly;
- (id)editorControllerForLikenessType:(unsigned long long)a0;
- (id)initWithSettingsDelegate:(id)a0;
- (BOOL)isBackwardsNavigationEnabled;
- (void)saveAvatarPickerResult;
- (void)setActiveViewController:(id)a0 inView:(id)a1 withTopInset:(double)a2;
- (void)setNextButtonEnabled:(BOOL)a0;
- (void)setNextButtonTitle:(id)a0;
- (void)setPreviousButtonEnabled:(BOOL)a0;
- (void)setReadyToSave;
- (void)updateNavigationForReturn;

@end
