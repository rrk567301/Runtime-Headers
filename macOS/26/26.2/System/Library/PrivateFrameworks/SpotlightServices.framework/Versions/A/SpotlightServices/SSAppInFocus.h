@interface SSAppInFocus : SSBaseConsumer

+ (id)sharedInstance;

- (id)stream;
- (void)handleEvent:(id)a0;
- (BOOL)filterEvent:(id)a0;
- (id)init;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0;

@end
