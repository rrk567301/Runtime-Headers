@class CNAvatarPickerViewController, NSViewController, CNMutableContact, CNPhotoLikenessEditorViewController;
@protocol CNAvatarEditorDelegate;

@interface CNAvatarEditorViewController : NSViewController <CNLikenessEditorHostDelegate>

@property (weak) NSViewController *activeViewController;
@property (retain) CNPhotoLikenessEditorViewController *photoLikenessEditor;
@property (retain, nonatomic) CNAvatarPickerViewController *avatarPickerViewController;
@property (retain) CNMutableContact *editorContact;
@property (weak) id<CNAvatarEditorDelegate> delegate;

+ (id)log;

- (void).cxx_destruct;
- (void)close;
- (void)cancel;
- (void)save;
- (void)cancel:(id)a0;
- (void)loadView;
- (void)save:(id)a0;
- (id)contact;
- (void)setContact:(id)a0;
- (void)setWindowTitle:(id)a0;
- (void)setNextButtonAction:(id /* block */)a0;
- (void)setPreviousButtonAction:(id /* block */)a0;
- (id)likeness;
- (char)isBuddy;
- (void)setActiveViewController:(id)a0 inView:(id)a1;
- (id)activeEditorController;
- (char)allowEditingMemojiAndMonogramOnly;
- (id)editorControllerForLikenessType:(unsigned long long)a0;
- (id)initWithSettingsDelegate:(id)a0;
- (char)isBackwardsNavigationEnabled;
- (void)saveAvatarPickerResult;
- (void)setActiveViewController:(id)a0 inView:(id)a1 withTopInset:(double)a2;
- (void)setNextButtonEnabled:(char)a0;
- (void)setNextButtonTitle:(id)a0;
- (void)setPreviousButtonEnabled:(char)a0;
- (void)setReadyToSave;
- (void)updateNavigationForReturn;

@end
