@class NSNumber, CNPostalAddress, NSStackView;

@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView

@property (retain, nonatomic) NSNumber *cachedIntrinsicHeight;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) NSStackView *addressFieldsContainer;
@property (readonly, nonatomic) BOOL isEditing;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)controlTextDidChange:(id)a0;
- (id)makeTouchBar;
- (id)updateKeyViewLoop;
- (BOOL)hasValue;
- (void)focus;
- (void)highlightSearchTerms:(id)a0;
- (id)firstTextField;
- (id)valueView;
- (void)setValueSelectable:(BOOL)a0;
- (void)updateValueView;
- (void)invalidatePostalAddressRowLayout;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)rebuildAddressEntryFields;
- (BOOL)isEmptyAndNotFirstResponder;
- (void)processControlTextDidChange:(id)a0;
- (id)calculatedHeightGivenIntrinsicHeight:(double)a0;
- (void)setAddressFieldsEnabled:(BOOL)a0;
- (void)textFieldWillBecomeFirstResponder:(id)a0;
- (void)textFieldWillResignFirstResponder:(id)a0;

@end
