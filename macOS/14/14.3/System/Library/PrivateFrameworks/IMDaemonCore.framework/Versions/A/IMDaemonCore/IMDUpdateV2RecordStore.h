@class NSMutableDictionary;

@interface IMDUpdateV2RecordStore : NSObject <RecordStoreProviding>

@property (retain, nonatomic) NSMutableDictionary *recordNameToMessageItemMap;

- (void).cxx_destruct;
- (id)batchOfRecordsToWriteWithLimit:(long long)a0 error:(id *)a1;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)legacyImport:(id)a0;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)resetLocalSyncStateIfAppropriate;

@end
