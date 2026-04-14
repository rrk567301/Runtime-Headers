@class NSMutableDictionary, NSArray, NSString, HMMCoreDataCounterStorage, HMMCoreDataNamedGroup;
@protocol HMMCounterDatePartitionProvider;

@interface HMMStandardStatisticsGroup : NSObject <HMMStatisticsGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _coreDataGroupToken;
}

@property (readonly, nonatomic) HMMCoreDataCounterStorage *coreDataStorage;
@property (readonly, nonatomic) NSMutableDictionary *ephemeralContainers;
@property (readonly, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) HMMCoreDataNamedGroup *coreDataGroup;
@property (readonly, nonatomic) id<HMMCounterDatePartitionProvider> partitionProvider;
@property (readonly, copy, nonatomic) NSArray *ephemeralContainerNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deletePartitionsAfterDate:(id)a0 coreDataStorage:(id)a1;
+ (void)deletePartitionsBeforeDate:(id)a0 coreDataStorage:(id)a1;
+ (void)deleteStatisticsUsingPredicate:(id)a0 coreDataStorage:(id)a1;
+ (id)groupFromSpecifier:(id)a0 partitionProvider:(id)a1 coreDataStorage:(id)a2;

- (void).cxx_destruct;
- (id)statisticsInEphemeralContainer:(id)a0;
- (BOOL)addEphemeralContainerWithName:(id)a0;
- (void)addMaxValueObserver:(id)a0 forStatistics:(id)a1;
- (void)addValue:(long long)a0 toStatistics:(id)a1;
- (id)datePartitions;
- (void)deactivateEphemeralContainerWithName:(id)a0;
- (void)removeEphemeralContainerWithName:(id)a0;
- (id)statistics:(id)a0 inDatePartition:(id)a1;
- (id)statistics:(id)a0 inEphemeralContainer:(id)a1;
- (id)statisticsInDatePartition:(id)a0;
- (id)initWithCoreDataGroup:(id)a0 partitionProvider:(id)a1 coreDataStorage:(id)a2;
- (void)notifyObserversForStatistics:(id)a0 previousMax:(long long)a1 newMax:(long long)a2;
- (id)observersForStatistics:(id)a0;

@end
