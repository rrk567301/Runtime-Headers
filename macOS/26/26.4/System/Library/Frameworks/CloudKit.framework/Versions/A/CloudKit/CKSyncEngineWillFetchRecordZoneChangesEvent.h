@class CKRecordZoneID;

@interface CKSyncEngineWillFetchRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

- (id)initWithZoneID:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
