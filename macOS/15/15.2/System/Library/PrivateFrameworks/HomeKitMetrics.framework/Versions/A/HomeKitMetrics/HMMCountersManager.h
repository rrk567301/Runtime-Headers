@class NSArray, NSMutableDictionary, HMMDailyPartitionProvider, HMMCoreDataCounterStorage, HMMDateProvider;

@interface HMMCountersManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_counterGroups;
    NSMutableDictionary *_statisticsGroups;
    NSMutableDictionary *_managedContainersByName;
    BOOL _storageNeedsLoading;
}

@property (readonly, nonatomic) HMMCoreDataCounterStorage *coreDataStorage;
@property (readonly, nonatomic) HMMDailyPartitionProvider *partitionProvider;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, copy, nonatomic) NSArray *managedEphemeralContainers;

- (void).cxx_destruct;
- (void)save;
- (BOOL)addEphemeralContainerWithName:(id)a0;
- (id)counterGroupForAccessoryUUID:(id)a0 homeUUID:(id)a1 groupName:(id)a2;
- (id)counterGroupForHomeUUID:(id)a0 groupName:(id)a1;
- (id)counterGroupForName:(id)a0;
- (void)deactivateEphemeralContainerWithName:(id)a0;
- (void)deletePartitionsAfterDate:(id)a0;
- (void)deletePartitionsBeforeDate:(id)a0;
- (void)enumerateCounterGroupsUsingBlock:(id /* block */)a0;
- (void)enumerateStatisticsGroupsUsingBlock:(id /* block */)a0;
- (id)initWithDataModelName:(id)a0 atPath:(id)a1;
- (BOOL)loadPersistentStoreWithError:(id *)a0;
- (id)managedEphemeralContainerForName:(id)a0;
- (void)removeEphemeralContainerWithName:(id)a0;
- (id)statisticsGroupForAccessoryUUID:(id)a0 homeUUID:(id)a1 groupName:(id)a2;
- (id)statisticsGroupForHomeUUID:(id)a0 groupName:(id)a1;
- (id)statisticsGroupForName:(id)a0;
- (BOOL)_loadPersistentStoreWithError:(id *)a0;
- (id)counterGroupForHomeUUIDFromLogEvent:(id)a0 groupName:(id)a1;
- (id)counterGroupForSpecifier:(id)a0 coreDataGroup:(id)a1;
- (id)initWithDataModelName:(id)a0 atPath:(id)a1 dateProvider:(id)a2;
- (void)loadAllCounterGroups;
- (void)loadAllStatisticsGroups;
- (id)statisticsGroupForHomeUUIDFromLogEvent:(id)a0 groupName:(id)a1;
- (id)statisticsGroupForSpecifier:(id)a0 coreDataGroup:(id)a1;

@end
