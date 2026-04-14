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
- (id)editViewFocusView;
- (id)nonEditViewFocusView;
- (double)yOffsetOfValueView;
- (double)yOffsetOfEditView;
- (void)addressFormatChanged:(id)a0;
- (id)postalAddressRowView;
- (id)editPostalAddressRowView;
- (void)mapsButtonPressed:(id)a0;
- (void)addressSubfieldTextDidChange:(id)a0;
- (BOOL)didLineCountChangeBetweenStoredPostalAddressAndAddressSubfied:(id)a0;
- (id)storedPostalAddressComponentCorrespondingToAddressSubfield:(id)a0;

@end
