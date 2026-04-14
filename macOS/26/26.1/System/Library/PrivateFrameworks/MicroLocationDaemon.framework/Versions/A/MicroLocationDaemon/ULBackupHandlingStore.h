@class ULStore, NSArray, NSDictionary;

@interface ULBackupHandlingStore : ULStore

@property (retain, nonatomic) ULStore *targetStore;
@property (retain, nonatomic) NSArray *distinctHomeloiGroupIds;
@property (retain, nonatomic) NSDictionary *loiUUIDToObjectIDMap;
@property (retain, nonatomic) NSDictionary *scanEventUUIDToObjectIDMap;
@property (nonatomic) struct function<bool ()> { struct __value_func<bool ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } shouldCancel;

- (BOOL)importData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)exportData;
- (BOOL)_commitBatchToStore:(id)a0 forEntityName:(id)a1 stop:(BOOL *)a2;
- (id)_getDistinctHomeLoiGroupIds;
- (id)_getUUIDToObjectIDMapForEntityName:(id)a0 uuidAttribute:(id)a1 sortAttribute:(id)a2 atStore:(id)a3;
- (BOOL)_transferDataUsingGroupIdsFilter:(BOOL)a0;
- (void)_transferLOIsInBatch:(id)a0 toStore:(id)a1;
- (BOOL)_transferLOIsUsingGroupIdsFilter:(BOOL)a0;
- (BOOL)_transferRecordsForEntityName:(id)a0 relation:(id)a1 relationUUID:(id)a2 uuidMap:(id)a3 sortAttribute:(id)a4 limit:(unsigned long long)a5 fetchBatchSize:(unsigned long long)a6;
- (void)_transferRecordsInBatch:(id)a0 forEntityName:(id)a1 relation:(id)a2 relationUUID:(id)a3 uuidMap:(id)a4 toStore:(id)a5;
- (id)initWithSourceDatabase:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0 targetDatabase:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a1 andCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (void)logTransferResult:(BOOL)a0 isExport:(BOOL)a1;

@end
