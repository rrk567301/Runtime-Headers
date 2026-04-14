@class CKRecordZone;

@interface CKSyncEnginePendingZoneSave : CKSyncEnginePendingDatabaseChange

@property (readonly, copy, nonatomic) CKRecordZone *zone;

+ (BOOL)supportsSecureCoding;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)zoneID;
- (id)initWithZone:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKDescriptionClassName;
- (id)oppositeTypeChange;

@end
