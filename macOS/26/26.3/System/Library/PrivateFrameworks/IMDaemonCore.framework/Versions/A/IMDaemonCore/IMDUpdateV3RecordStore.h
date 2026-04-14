@class NSMutableDictionary;

@interface IMDUpdateV3RecordStore : NSObject <RecordStoreProviding>

@property (retain, nonatomic) NSMutableDictionary *recordNameToRowIDMap;

- (void).cxx_destruct;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)legacyImport:(id)a0;
- (void)resetFetchState;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)resetLocalSyncStateIfAppropriate;
- (void)clearLocalSyncState:(unsigned long long)a0;

@end
