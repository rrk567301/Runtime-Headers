@interface ABLinkedPersonCollectionViewItem : ABCollectionViewItem

- (BOOL)supportsClickToEdit;
- (void)_updateViewLabel;
- (BOOL)shouldShowActionMenu;
- (void)_updateViewLabelForEmptyLabel;
- (void)_updateViewLabelForPopulatedLabel;
- (id)makeCardActionMenuItems;
- (id)actionMenuItemsFromFactory;
- (id)headerMenuItem;
- (void)tweakActionMenuItems:(id)a0;
- (id)preferredPerson;

@end
