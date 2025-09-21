@class NSDictionary, _DPCoreDataStorage, NSObject;
@protocol OS_dispatch_queue;

@interface _DPStorage : NSObject <_DPMaintenance>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) char readOnly;
@property (readonly, nonatomic) NSDictionary *converterFromEntity;
@property (readonly, nonatomic) NSDictionary *converterFromClass;
@property (readonly, nonatomic) _DPCoreDataStorage *coredataStorage;

+ (id)storageWithDirectory:(id)a0 readOnly:(char)a1;
+ (id)errorStringFor:(long long)a0;
+ (id)createFetchRequestFor:(id)a0 entityName:(id)a1 predicate:(id)a2 fetchLimit:(unsigned long long)a3 fetchOffset:(unsigned long long)a4;
+ (id)entitiesRequiringMaintenance;
+ (id)shuffleOrderOfRecords:(id)a0 count:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)deleteAllRecordsByKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteRecords:(id)a0 withCompletion:(id /* block */)a1;
- (char)deleteStorageWithObliterationOption:(char)a0;
- (void)fetchKeynamesFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)fetchRecordCountForEntity:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)fetchRecordsFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 randomizeOrder:(char)a4 withCompletion:(id /* block */)a5;
- (void)fetchRecordsFor:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 fetchOffset:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)handleEmptyArrayError:(long long)a0 completion:(id /* block */)a1;
- (id)initWithDirectory:(id)a0 readOnly:(char)a1;
- (id)removeBadObjects:(id)a0;
- (void)saveRecords:(id)a0 andFlush:(char)a1 withCompletion:(id /* block */)a2;
- (void)saveRecords:(id)a0 withCompletion:(id /* block */)a1;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void)scheduleStorageCullingWithName:(id)a0 database:(id)a1;
- (void)updateRecords:(id)a0 withCompletion:(id /* block */)a1;

@end
