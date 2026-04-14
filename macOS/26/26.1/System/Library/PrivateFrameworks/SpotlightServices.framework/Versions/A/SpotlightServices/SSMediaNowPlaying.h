@interface SSMediaNowPlaying : SSBaseConsumer

+ (id)sharedInstance;

- (id)stream;
- (BOOL)filterEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_identifierForItemUpdate:(id)a0;
- (id)_itemUpdateForEvent:(id)a0 itemIdentifier:(id)a1 bundleToUpdate:(id)a2;
- (id)consumerLabel;
- (id)itemUpdateForEvent:(id)a0 itemIdentifier:(id)a1 bundleToUpdate:(id)a2;

@end
