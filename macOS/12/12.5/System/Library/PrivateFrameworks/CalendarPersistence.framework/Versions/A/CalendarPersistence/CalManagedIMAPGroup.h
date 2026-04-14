@interface CalManagedIMAPGroup : CalManagedGroup

+ (id)pathExtension;
+ (id)entityName;

- (id)type;
- (BOOL)isRemote;
- (void)awakeFromInsert;

@end
