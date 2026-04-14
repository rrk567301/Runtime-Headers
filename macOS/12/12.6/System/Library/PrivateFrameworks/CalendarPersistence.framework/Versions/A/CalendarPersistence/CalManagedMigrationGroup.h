@class CalManagedPrincipal;

@interface CalManagedMigrationGroup : CalManagedGroup

@property BOOL dataFlowsTowardLocalStore;
@property (retain) CalManagedPrincipal *principal;

+ (id)pathExtension;
+ (id)entityName;

- (id)type;
- (id)properties;
- (id)objectIdentifier;
- (BOOL)isManagedAttachmentSupported;

@end
