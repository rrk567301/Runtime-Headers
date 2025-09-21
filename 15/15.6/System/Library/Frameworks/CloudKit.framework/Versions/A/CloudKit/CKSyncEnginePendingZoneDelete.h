@interface CKSyncEnginePendingZoneDelete : CKSyncEnginePendingDatabaseChange

+ (char)supportsSecureCoding;

- (id)initWithZoneID:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKDescriptionClassName;
- (id)oppositeTypeChange;

@end
