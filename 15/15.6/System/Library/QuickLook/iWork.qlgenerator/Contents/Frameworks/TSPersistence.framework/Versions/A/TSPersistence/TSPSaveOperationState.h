@class NSMapTable, NSHashTable;

@interface TSPSaveOperationState : NSObject {
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    NSMapTable *_saveOperationStatesForRemoteStorages;
}

@property (readonly, nonatomic) char shouldUpdate;
@property (readonly, nonatomic) char isSavingCurrentDocument;
@property (readonly, nonatomic) char inheritAttributes;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) char hasAnyRemoteData;
@property (nonatomic) int sampleID;

- (id)init;
- (void).cxx_destruct;
- (void)addNewPackageDataStorage:(id)a0 forRemoteDataStorage:(id)a1 changeCount:(unsigned long long)a2;
- (void)addNewStorage:(id)a0 forData:(id)a1;
- (void)addRemoteData:(id)a0;
- (void)enumerateDataAndStoragesUsingBlock:(id /* block */)a0;
- (void)enumerateRemoteDataUsingBlock:(id /* block */)a0;
- (char)hasNewStorageForData:(id)a0;
- (char)hasRemoteData:(id)a0;
- (id)initWithUpdateType:(long long)a0;
- (id)saveOperationStateForRemoteStorage:(id)a0;
- (void)willMigrateRemoteDataToTemporaryStorage:(id)a0;

@end
