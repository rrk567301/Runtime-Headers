@interface ABLinkedPersonCollectionViewItem : ABCollectionViewItem

- (id)preferredPerson;
- (void)_updateViewLabel;
- (void)_updateViewLabelForEmptyLabel;
- (void)_updateViewLabelForPopulatedLabel;
- (id)actionMenuItemsFromFactory;
- (id)headerMenuItem;
- (id)makeCardActionMenuItems;
- (char)shouldShowActionMenu;
- (char)supportsClickToEdit;
- (void)tweakActionMenuItems:(id)a0;

@end
