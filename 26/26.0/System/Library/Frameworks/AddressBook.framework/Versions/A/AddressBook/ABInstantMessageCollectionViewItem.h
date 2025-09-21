@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (BOOL)validateMenuItem:(id)a0;
- (void)updateView;
- (id)services;
- (void)dealloc;
- (void)serviceChanged:(id)a0;
- (id)instantMessageEditView;
- (id)instantMessageView;
- (BOOL)isServiceActive:(id)a0;
- (id)menuItemForService:(id)a0;
- (void)populateEditViewMessagingServiceChooserPopup:(id)a0;
- (id)serviceMenu;

@end
