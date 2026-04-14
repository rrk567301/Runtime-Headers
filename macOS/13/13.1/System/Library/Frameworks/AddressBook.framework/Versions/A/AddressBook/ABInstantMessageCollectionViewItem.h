@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (void)dealloc;
- (id)services;
- (BOOL)validateMenuItem:(id)a0;
- (void)updateView;
- (void)populateEditViewMessagingServiceChooserPopup:(id)a0;
- (void)serviceChanged:(id)a0;
- (id)instantMessageView;
- (id)instantMessageEditView;
- (id)serviceMenu;
- (id)menuItemForService:(id)a0;
- (BOOL)isServiceActive:(id)a0;

@end
