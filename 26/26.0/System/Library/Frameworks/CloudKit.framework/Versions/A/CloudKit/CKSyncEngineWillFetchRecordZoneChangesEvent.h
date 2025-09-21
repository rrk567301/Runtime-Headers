@class CKRecordZoneID;

@interface CKSyncEngineWillFetchRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithZoneID:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
