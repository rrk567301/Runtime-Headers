@interface ABPreferredNameCollectionViewItem : ABCollectionViewItem

- (void)datumViewDidEndEditing:(id)a0;
- (void)_updateViewValue;
- (BOOL)supportsClickToEdit;
- (void)_updateViewControls;
- (id)_transformValue:(id)a0 reverseTransform:(BOOL)a1;
- (id)identifierPreferredForName;
- (void)markPersonAsPreferredForName:(id)a0;

@end
