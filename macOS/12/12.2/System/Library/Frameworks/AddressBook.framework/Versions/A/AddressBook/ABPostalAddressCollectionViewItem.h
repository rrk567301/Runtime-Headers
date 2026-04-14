@class NSArray;

@interface ABPostalAddressCollectionViewItem : ABCollectionViewItem {
    NSArray *_countryMenuItems;
    unsigned long long _updateViewCallDepth;
}

+ (unsigned long long)numberOfLinesInString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)postalAddress;
- (void)_updateViewValue;
- (id)_labelMenuItems;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (BOOL)didLineCountChangeBetweenStoredPostalAddressAndAddressSubfied:(id)a0;
- (void)addressSubfieldTextDidChange:(id)a0;
- (double)yOffsetOfEditView;
- (double)yOffsetOfValueView;
- (id)editViewFocusView;
- (id)nonEditViewFocusView;
- (void)addressFormatChanged:(id)a0;
- (id)postalAddressRowView;
- (id)editPostalAddressRowView;
- (id)storedPostalAddressComponentCorrespondingToAddressSubfield:(id)a0;
- (void)mapsButtonPressed:(id)a0;

@end
