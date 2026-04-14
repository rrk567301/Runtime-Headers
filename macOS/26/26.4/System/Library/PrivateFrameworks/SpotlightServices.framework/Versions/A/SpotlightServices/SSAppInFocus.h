@interface SSAppInFocus : SSBaseConsumer

+ (id)sharedInstance;

- (BOOL)filterEvent:(id)a0;
- (id)stream;
- (id)init;
- (void)handleEvent:(id)a0;
- (id)_attributesUpdatesForEvent:(id)a0;
- (id)_itemUpdatesForEvent:(id)a0;
- (id)consumerLabel;
- (id)itemUpdatesForEvent:(id)a0;

@end
