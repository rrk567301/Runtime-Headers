@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (void)dealloc;
- (id)services;
- (BOOL)validateMenuItem:(id)a0;
- (void)updateView;
- (id)instantMessageView;
- (id)instantMessageEditView;
- (void)populateEditViewMessagingServiceChooserPopup:(id)a0;
- (id)menuItemForService:(id)a0;
- (id)serviceMenu;
- (void)serviceChanged:(id)a0;
- (BOOL)isServiceActive:(id)a0;

@end
