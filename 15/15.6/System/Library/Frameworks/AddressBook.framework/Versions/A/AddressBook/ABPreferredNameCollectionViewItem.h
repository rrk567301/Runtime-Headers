@interface ABPreferredNameCollectionViewItem : ABCollectionViewItem

- (id)_transformValue:(id)a0 reverseTransform:(char)a1;
- (void)_updateViewControls;
- (void)_updateViewValue;
- (void)datumViewDidEndEditing:(id)a0;
- (id)identifierPreferredForName;
- (void)markPersonAsPreferredForName:(id)a0;
- (char)supportsClickToEdit;

@end
