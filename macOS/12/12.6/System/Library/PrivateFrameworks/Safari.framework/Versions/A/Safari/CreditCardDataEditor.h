@class NSTextField, NSString, NSArray, AuthorizationRequest, NSLayoutConstraint, NSButton, CreditCardNumberFieldEditor, NSTableView;
@protocol CreditCardDataEditorDelegate;

@interface CreditCardDataEditor : NSViewController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    BOOL _shouldPreventResigningFirstResponder;
    unsigned long long _ignoringCreditCardDataChangeNotifications;
    AuthorizationRequest *_canShowCardNumbersAuthorizationRequest;
    CreditCardNumberFieldEditor *_creditCardNumberFieldEditor;
    NSArray *_virtualCardData;
    NSArray *_creditCardAndVirtualCardData;
}

@property (copy, nonatomic) NSArray *creditCardData;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;
@property (weak, nonatomic) NSButton *addCreditCardButton;
@property (weak, nonatomic) NSButton *removeCreditCardButton;
@property (weak, nonatomic) NSLayoutConstraint *addRemoveButtonEqualWidthsConstraint;
@property (weak, nonatomic) id<CreditCardDataEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_creditCardIconForNumberAllowingPartialMatch:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewWillAppear;
- (void)hideSheet:(id)a0;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)removeSelectedItems:(id)a0;
- (BOOL)tableView:(id)a0 keyDown:(id)a1;
- (void)_updateCreditCardAndVirtualCardData;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_reloadTableData;
- (void)resetCreditCardData;
- (void)_addVirtualCardData;
- (void)creditCardDataChanged;
- (void)_updateRemoveButtons;
- (id)_cardDataAtRowIndex:(long long)a0;
- (void)_performBlockIgnoringCreditCardDataChangeNotifications:(id /* block */)a0;
- (void)_removeCreditCardsAtIndexes:(id)a0;
- (void)_updateCreditCard:(id)a0 withCreditCardData:(id)a1;
- (void)_addCreditCard:(id)a0;
- (id)_indexesOfCreditCardsWithNumber:(id)a0 excludingCard:(id)a1;
- (void)_preventResigningFirstResponderWhilePerformingBlock:(id /* block */)a0;
- (BOOL)_canRemoveSelectedItems;
- (id)_groupCellViewForTableView:(id)a0 row:(long long)a1;
- (long long)_virtualCardOffsetInTableView;
- (BOOL)_isCreditCardNumberTextField:(id)a0;
- (BOOL)_shouldSetNumberOfCreditCardData:(id)a0 toCreditCardNumber:(id)a1;
- (id)_expirationDateForDate:(id)a0;
- (void)creditCardDataEditorCellView:(id)a0 didSetObjectValue:(id)a1 forTextFieldWithIdentifier:(id)a2;
- (void)creditCardDataEditorCellView:(id)a0 willAbortEditingForTextFieldWithIdentifier:(id)a1;
- (BOOL)creditCardDataEditorCellView:(id)a0 shouldEndEditingTextInFieldEditor:(id)a1 forTextFieldWithIdentifier:(id)a2;
- (void)creditCardDataEditorCellView:(id)a0 textDidChangeInFieldEditor:(id)a1 forTextFieldWithIdentifier:(id)a2;
- (void)addCreditCard:(id)a0;

@end
