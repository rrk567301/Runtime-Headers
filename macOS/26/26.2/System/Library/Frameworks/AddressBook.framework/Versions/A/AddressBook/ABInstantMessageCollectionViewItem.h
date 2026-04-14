@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (void)updateView;
- (BOOL)validateMenuItem:(id)a0;
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
