@interface ABLinkedPersonCollectionViewItem : ABCollectionViewItem

- (BOOL)supportsClickToEdit;
- (void)_updateViewLabel;
- (BOOL)shouldShowActionMenu;
- (void)_updateViewLabelForEmptyLabel;
- (void)_updateViewLabelForPopulatedLabel;
- (id)actionMenuItemsFromFactory;
- (void)tweakActionMenuItems:(id)a0;
- (id)headerMenuItem;
- (id)preferredPerson;
- (id)makeCardActionMenuItems;

@end
