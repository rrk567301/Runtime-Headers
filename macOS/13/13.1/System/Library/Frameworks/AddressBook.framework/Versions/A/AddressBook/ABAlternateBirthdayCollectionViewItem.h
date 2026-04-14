@interface ABAlternateBirthdayCollectionViewItem : ABDateCollectionViewItem

+ (void)markCalendarMenuItemAsSelected:(id)a0;
+ (void)markCalendarMenuItemAsNotSelected:(id)a0;

- (void)setLabel:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)placeholderString;
- (id)_localizedLabel;
- (id)_labelMenuItems;
- (void)labelChanged:(id)a0;
- (void)_updateViewLabel;
- (id)dateComponentsValueTransformer;
- (id)labelItemWithTitle:(id)a0 calendarIdentifier:(id)a1;
- (BOOL)_validateLabelMenuItem:(id)a0;
- (id)labelForPopup;
- (BOOL)allowsLabelCustomization;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (id)collectionViewAction;
- (void)takeValueFromGregorianBirthday;

@end
