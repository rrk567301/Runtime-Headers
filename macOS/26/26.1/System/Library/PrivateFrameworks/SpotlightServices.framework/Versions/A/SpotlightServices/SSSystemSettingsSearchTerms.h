@interface SSSystemSettingsSearchTerms : SSBaseConsumer

+ (id)sharedInstance;

- (id)stream;
- (BOOL)filterEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)_identifierForItemUpdate:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;

@end
