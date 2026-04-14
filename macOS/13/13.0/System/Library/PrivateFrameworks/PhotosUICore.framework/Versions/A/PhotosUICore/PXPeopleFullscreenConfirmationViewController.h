@class UXBarButtonItem, NSArray;

@interface PXPeopleFullscreenConfirmationViewController : PXPeopleConfirmationViewController

@property (retain) UXBarButtonItem *confirmButton;
@property (retain) UXBarButtonItem *denyButton;
@property (retain) UXBarButtonItem *doneButtonItem;
@property (retain) NSArray *cachedConfirmationToolbarItems;
@property (retain) NSArray *cachedLoadingToolbarItems;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)performUndo:(id)a0;
- (void)confirmTapped:(id)a0;
- (void)denyTapped:(id)a0;
- (void)presentSuggestion:(id)a0 animated:(BOOL)a1;
- (void)displaySummary;
- (void)dismissSummary;
- (void)updateViewWithViewState:(unsigned long long)a0;
- (void)suggestionDidDisplay;
- (void)_enableActionButtons;
- (void)_disableActionButtonsWithSelectedButton:(id)a0;
- (id)_newButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 keyEquivalent:(id)a3;
- (void)_setupToolbarItemsIfNeeded;

@end
