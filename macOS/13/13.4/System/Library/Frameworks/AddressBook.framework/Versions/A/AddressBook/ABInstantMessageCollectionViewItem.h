@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (void)dealloc;
- (id)services;
- (BOOL)validateMenuItem:(id)a0;
- (void)updateView;
- (void)serviceChanged:(id)a0;
- (id)instantMessageEditView;
- (id)instantMessageView;
- (BOOL)isServiceActive:(id)a0;
- (id)menuItemForService:(id)a0;
- (void)populateEditViewMessagingServiceChooserPopup:(id)a0;
- (id)serviceMenu;

@end
