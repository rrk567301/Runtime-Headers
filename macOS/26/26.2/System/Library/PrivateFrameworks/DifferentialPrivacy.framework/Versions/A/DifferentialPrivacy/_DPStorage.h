@class NSDictionary, _DPCoreDataStorage, NSObject;
@protocol OS_dispatch_queue;

@interface _DPStorage : NSObject <_DPMaintenance>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) NSDictionary *converterFromEntity;
@property (readonly, nonatomic) NSDictionary *converterFromClass;
@property (readonly, nonatomic) _DPCoreDataStorage *coredataStorage;

+ (id)entitiesRequiringMaintenance;
+ (id)errorStringFor:(long long)a0;
+ (id)shuffleOrderOfRecords:(id)a0 count:(unsigned long long)a1;
+ (id)storageWithDirectory:(id)a0 readOnly:(BOOL)a1;
+ (id)createFetchRequestFor:(id)a0 entityName:(id)a1 predicate:(id)a2 fetchLimit:(unsigned long long)a3 fetchOffset:(unsigned long long)a4;

- (void)fetchRecordsFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 randomizeOrder:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)flush;
- (void)saveRecords:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)deleteStorageWithObliterationOption:(BOOL)a0;
- (void)fetchKeynamesFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)handleEmptyArrayError:(long long)a0 completion:(id /* block */)a1;
- (id)removeBadObjects:(id)a0;
- (void)deleteRecords:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)saveRecords:(id)a0 andFlush:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)fetchRecordCountForEntity:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (id)initWithDirectory:(id)a0 readOnly:(BOOL)a1;
- (void)fetchRecordsFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)deleteAllRecordsByKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateRecords:(id)a0 withCompletion:(id /* block */)a1;
- (void)scheduleStorageCullingWithName:(id)a0 database:(id)a1;
- (id)init;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void)dealloc;

@end
