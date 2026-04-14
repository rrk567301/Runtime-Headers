@class PKAddressSearchModel, PKAutocompleteViewController, PKAddressSearchResults, NSString;
@protocol PKAutocompleteTextFieldDelegate;

@interface PKAutocompleteTextField : NSTextField <NSTextFieldDelegate, PKAutocompleteViewControllerDelegate, PKAddressSearchModelDelegate>

@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isAutocompleting) BOOL autocompleting;
@property (retain, nonatomic) PKAddressSearchModel *addressSearchModel;
@property (retain, nonatomic) PKAutocompleteViewController *autocompleteViewController;
@property (retain, nonatomic) PKAddressSearchResults *searchResults;
@property (weak, nonatomic) id<PKAutocompleteTextFieldDelegate> autocompleteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)contactsSearchUpdated:(id)a0;
- (void)selectedAddress:(id)a0 withError:(id)a1;
- (void)mapSearchUpdated:(id)a0;
- (void)autocompleteViewController:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInAutocompleteViewController:(id)a0;
- (long long)autocompleteViewController:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)autocompleteViewController:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)autocompleteViewController:(id)a0 viewForRowAtIndexPath:(id)a1;
- (void)autocompleteViewControllerDidFinish:(id)a0;
- (long long)_indexForSection:(long long)a0;
- (void)_beginSearchIfNecessary;
- (void)_updateAutocompleteVisibility;
- (void)_showAutocompleteIfNecessary;
- (void)_hideAutocomplete;
- (BOOL)_isViewOrSubviewFirstResponder:(id)a0;

@end
