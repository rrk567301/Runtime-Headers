@class CNAvatarPickerViewController, NSViewController, CNMutableContact, CNPhotoLikenessEditorViewController;
@protocol CNAvatarEditorDelegate;

@interface CNAvatarEditorViewController : NSViewController <CNLikenessEditorHostDelegate>

@property (weak) NSViewController *activeViewController;
@property (retain) CNPhotoLikenessEditorViewController *photoLikenessEditor;
@property (retain, nonatomic) CNAvatarPickerViewController *avatarPickerViewController;
@property (retain) CNMutableContact *editorContact;
@property (weak) id<CNAvatarEditorDelegate> delegate;

+ (id)log;

- (void)close;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadView;
- (void)save;
- (void)cancel:(id)a0;
- (void)save:(id)a0;
- (id)contact;
- (void)setContact:(id)a0;
- (void)setWindowTitle:(id)a0;
- (void)setPreviousButtonAction:(id /* block */)a0;
- (void)setNextButtonAction:(id /* block */)a0;
- (id)likeness;
- (id)initWithSettingsDelegate:(id)a0;
- (void)setNextButtonEnabled:(BOOL)a0;
- (void)setNextButtonTitle:(id)a0;
- (BOOL)isBackwardsNavigationEnabled;
- (void)setReadyToSave;
- (BOOL)isBuddy;
- (void)setPreviousButtonEnabled:(BOOL)a0;
- (void)updateNavigationForReturn;
- (void)setActiveViewController:(id)a0 inView:(id)a1;
- (void)setActiveViewController:(id)a0 inView:(id)a1 withTopInset:(double)a2;
- (id)activeEditorController;
- (id)editorControllerForLikenessType:(unsigned long long)a0;
- (void)saveAvatarPickerResult;

@end
