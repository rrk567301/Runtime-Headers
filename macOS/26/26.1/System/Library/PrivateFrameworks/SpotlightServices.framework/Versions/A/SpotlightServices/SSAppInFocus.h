@interface SSAppInFocus : SSBaseConsumer

+ (id)sharedInstance;

- (id)stream;
- (BOOL)filterEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0;

@end
