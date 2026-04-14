@class CKRecordZoneID;

@interface IMDScheduledMessageStore : IMDMessageStore

@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;

- (void)clearTombstonesForRecordIDs:(id)a0;
- (id)recordIDsAndGUIDsToDeleteWithLimit:(long long)a0;
- (id)init;
- (id)messageRecordsToUploadToCloudKitWithFilter:(unsigned long long)a0 limit:(long long)a1;

@end
