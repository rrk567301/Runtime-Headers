@interface SSSystemSettingsSearchTerms : SSBaseConsumer

+ (id)sharedInstance;

- (BOOL)filterEvent:(id)a0;
- (id)stream;
- (id)init;
- (void)handleEvent:(id)a0;
- (id)_identifierForItemUpdate:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0 bundleToUpdate:(id)a1 timestamp:(id)a2;

@end
