@class NSTextField, NSString, NSScrollView, NSTimer, NSStackView, AccountDetailTOTPSecretEntryViewController, WBSSavedAccount, NSLayoutConstraint, NSButton, TableViewPlus, NSMutableArray;
@protocol AccountDetailSheetTOTPViewControllerDelegate;

@interface AccountDetailSheetTOTPViewController : NSViewController <TableViewPlusDataSource, TableViewPlusDelegate, AccountDetailTOTPSecretEntryViewControllerDelegate> {
    NSTimer *_totpTimer;
    NSMutableArray *_totpGenerators;
    AccountDetailTOTPSecretEntryViewController *_secretEntryController;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) TableViewPlus *tableView;
@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) NSTextField *explanatoryTextLabel;
@property (weak, nonatomic) NSScrollView *tableViewScrollView;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (weak, nonatomic) NSButton *addButton;
@property (retain, nonatomic) NSButton *removeButton;
@property (retain, nonatomic) WBSSavedAccount *savedAccount;
@property (weak, nonatomic) id<AccountDetailSheetTOTPViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (BOOL)_shouldShowAddButton;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)_updateTableViewAppearance;
- (void)hideSheet;
- (void)_updateExplanatoryTextLabel;
- (void)_startTOTPTimerIfNeeded;
- (void)_updateTOTPCell:(id)a0 generator:(id)a1;
- (void)_confirmAndRemoveTOTPGenerator:(id)a0;
- (void)_deleteTOTPGenerator:(id)a0;
- (id)_formattedCodeFromGenerator:(id)a0 font:(id)a1;
- (void)_stopTOTPTimer;
- (void)_addTOTPGenerator:(id)a0;
- (void)totpSecretEntryViewController:(id)a0 addTOTPGeneratorWithSecret:(id)a1;
- (void)_addButtonClicked:(id)a0;
- (void)_copyTOTPCode:(id)a0;

@end
