@class NSMutableDictionary, NSArray, NSString, HMMCoreDataCounterStorage, HMMCoreDataNamedGroup;
@protocol HMMCounterDatePartitionProvider;

@interface HMMStandardCounterGroup : NSObject <HMMCounterGroup> {
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

+ (void)deleteCountersUsingPredicate:(id)a0 coreDataStorage:(id)a1;
+ (void)deletePartitionsAfterDate:(id)a0 coreDataStorage:(id)a1;
+ (void)deletePartitionsBeforeDate:(id)a0 coreDataStorage:(id)a1;
+ (id)groupFromSpecifier:(id)a0 partitionProvider:(id)a1 coreDataStorage:(id)a2;

- (void).cxx_destruct;
- (BOOL)addEphemeralContainer:(id)a0;
- (void)addObserver:(id)a0 forCounter:(id)a1;
- (id)countersInDatePartition:(id)a0;
- (id)countersInEphemeralContainer:(id)a0;
- (id)datePartitions;
- (void)deactivateEphemeralContainer:(id)a0;
- (void)incrementCounter:(id)a0 by:(long long)a1;
- (void)removeEphemeralContainer:(id)a0;
- (long long)sumOfCountersInDatePartition:(id)a0;
- (long long)valueForCounter:(id)a0 inDatePartition:(id)a1;
- (long long)valueForCounter:(id)a0 inEphemeralContainer:(id)a1;
- (void)incrementCounter:(id)a0;
- (id)initWithCoreDataGroup:(id)a0 partitionProvider:(id)a1 coreDataStorage:(id)a2;
- (void)notifyObserversForCounter:(id)a0 previousCount:(long long)a1 newCount:(long long)a2;
- (id)observersForCounter:(id)a0;
- (long long)sumOfCountersInEphemeralContainer:(id)a0;

@end
