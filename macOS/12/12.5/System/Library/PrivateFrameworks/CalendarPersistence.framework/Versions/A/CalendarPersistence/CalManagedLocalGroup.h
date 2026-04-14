@interface CalManagedLocalGroup : CalManagedGroup

+ (id)pathExtension;
+ (id)entityName;

- (id)type;
- (id)properties;
- (void)willSave;
- (id)ownerAddresses;
- (BOOL)supportsPublishing;

@end
