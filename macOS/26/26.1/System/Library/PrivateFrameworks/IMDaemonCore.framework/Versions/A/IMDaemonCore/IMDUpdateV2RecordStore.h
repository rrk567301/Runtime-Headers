@class NSMutableDictionary;

@interface IMDUpdateV2RecordStore : NSObject <RecordStoreProviding>

@property (retain, nonatomic) NSMutableDictionary *recordNameToMessageItemMap;

- (void)resetFetchState;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)legacyImport:(id)a0;
- (void)resetLocalSyncStateIfAppropriate;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)clearLocalSyncState:(unsigned long long)a0;

@end
