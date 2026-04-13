@class NSTextField, NSString, WBSSavedPasswordStore, NSButton;
@protocol AddPasswordSheetControllerDelegate;

@interface AddPasswordSheetController : NSWindowController <NSControlTextEditingDelegate> {
    WBSSavedPasswordStore *_passwordStore;
    BOOL _preservePendingTextFieldStrings;
}

@property (weak, nonatomic) NSTextField *websiteTextField;
@property (weak, nonatomic) NSTextField *userNameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *addButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic, getter=isShowingSheet) BOOL showingSheet;
@property (weak, nonatomic) id<AddPasswordSheetControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)windowNibName;
- (void)showSheetInWindow:(id)a0;
- (void)hideSheetAndPrepareForReinstall;
- (id)initWithPasswordStore:(id)a0;
- (void)_resetTextFields;
- (BOOL)_canSaveCurrentlyTypedPassword;
- (void)_hideSheet;
- (void)_addButtonWasClicked:(id)a0;
- (void)_cancelButtonWasClicked:(id)a0;

@end
