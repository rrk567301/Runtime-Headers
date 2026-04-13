@class PXComposeRecipientSelectionManager, NSString, PXComposeRecipientTableViewModel, PXComposeRecipientValidationManager, NSTableView, CNContactPicker;
@protocol PXComposeRecipientTableViewControllerDelegate, PXPersonSuggestion;

@interface PXComposeRecipientTableViewController : NSViewController <PXComposeRecipientDataSourceManagerDelegate, PXComposeRecipientSelectionManagerDelegate, PXComposeRecipientValidationManagerDelegate, CNContactPickerDelegate, NSTableViewDataSource, NSTableViewDelegate, PXComposeRecipientAddRecipientTableViewCellDelegate, PXComposeRecipientTableViewCellDelegate, PXChangeObserver> {
    id<PXPersonSuggestion> _personSuggestionForBootstrapping;
    CNContactPicker *_addPeoplePicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXComposeRecipientTableViewModel *viewModel;
@property (retain, nonatomic) PXComposeRecipientSelectionManager *selectionManager;
@property (retain, nonatomic) PXComposeRecipientValidationManager *validationManager;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double tableViewHeight;
@property (readonly, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) id<PXComposeRecipientTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 rowActionsForRow:(long long)a1 edge:(long long)a2;
- (void)contactPickerDidClose:(id)a0;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)configureWithViewModel:(id)a0;
- (void)tableViewCellDidChangeChecked:(id)a0;
- (void)didSelectAddTableViewCell:(id)a0;
- (id)_tableView:(id)a0 participantCellViewForRow:(long long)a1;
- (id)_addCellViewForTableView:(id)a0;
- (void)_deleteComposeRecipientAtIndex:(long long)a0;
- (void)_updateHeaderTitle;
- (void)composeRecipientDataSourceManager:(id)a0 didUpdateDataSourceWithChangeDetails:(id)a1;
- (void)composeRecipientSelectionManager:(id)a0 didUpdateSelectionSnapshotWithChangeDetails:(id)a1;
- (void)composeRecipientValidationManager:(id)a0 didUpdateValidationWithChangedIndexes:(id)a1;
- (BOOL)isValidAddressForComposeRecipient:(id)a0;
- (id)cellModelAtIndex:(unsigned long long)a0;
- (void)updateTableViewHeight;
- (void)configureCellModel:(id)a0 withComposeRecipient:(id)a1;
- (void)bootstrapPersonSuggestion:(id)a0 withContact:(id)a1;

@end
