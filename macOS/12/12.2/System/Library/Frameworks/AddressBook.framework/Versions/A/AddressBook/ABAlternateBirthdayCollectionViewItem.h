@interface ABAlternateBirthdayCollectionViewItem : ABDateCollectionViewItem

+ (void)markCalendarMenuItemAsSelected:(id)a0;
+ (void)markCalendarMenuItemAsNotSelected:(id)a0;

- (void)setLabel:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)placeholderString;
- (id)_localizedLabel;
- (id)_labelMenuItems;
- (id)labelItemWithTitle:(id)a0 calendarIdentifier:(id)a1;
- (void)labelChanged:(id)a0;
- (id)dateComponentsValueTransformer;
- (void)_updateViewLabel;
- (id)collectionViewAction;
- (BOOL)_validateLabelMenuItem:(id)a0;
- (id)labelForPopup;
- (BOOL)allowsLabelCustomization;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (void)takeValueFromGregorianBirthday;

@end
