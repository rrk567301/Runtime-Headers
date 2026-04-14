@class NSMutableDictionary;

@interface IMDUpdateV3RecordStore : NSObject <RecordStoreProviding>

@property (retain, nonatomic) NSMutableDictionary *recordNameToRowIDMap;

- (void)resetLocalSyncStateIfAppropriate;
- (void)resetFetchState;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void)legacyImport:(id)a0;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void).cxx_destruct;

@end
