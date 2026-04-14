@class CKRecordZoneID;

@interface IMDScheduledMessageStore : IMDMessageStore

@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;

- (id)init;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (id)messageRecordsToUploadToCloudKitWithLimit:(long long)a0;
- (id)recordIDsAndGUIDsToDeleteWithLimit:(long long)a0;

@end
