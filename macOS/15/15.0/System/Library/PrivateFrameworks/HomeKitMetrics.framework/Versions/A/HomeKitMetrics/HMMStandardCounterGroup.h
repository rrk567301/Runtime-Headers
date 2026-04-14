@class HMMCoreDataNamedGroup, NSMutableDictionary, NSArray, NSString, HMMDateProvider, HMMCoreDataCounterStorage;
@protocol HMMUptimeProvider, HMMCounterDatePartitionProvider;

@interface HMMStandardCounterGroup : NSObject <HMMCounterGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _coreDataGroupToken;
}

@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (readonly, nonatomic) HMMCoreDataCounterStorage *coreDataStorage;
@property (readonly, nonatomic) NSMutableDictionary *ephemeralContainers;
@property (readonly, nonatomic) NSMutableDictionary *observers;
@property (readonly, nonatomic) NSMutableDictionary *runningDurationCounters;
@property (readonly, nonatomic) HMMCoreDataNamedGroup *coreDataGroup;
@property (readonly, nonatomic) id<HMMCounterDatePartitionProvider> partitionProvider;
@property (readonly, copy, nonatomic) NSArray *ephemeralContainerNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deleteCountersUsingPredicate:(id)a0 coreDataStorage:(id)a1;
+ (void)deletePartitionsAfterDate:(id)a0 coreDataStorage:(id)a1;
+ (void)deletePartitionsBeforeDate:(id)a0 coreDataStorage:(id)a1;
+ (id)groupFromSpecifier:(id)a0 dateProvider:(id)a1 partitionProvider:(id)a2 coreDataStorage:(id)a3;
+ (id)groupFromSpecifier:(id)a0 dateProvider:(id)a1 partitionProvider:(id)a2 coreDataStorage:(id)a3 uptimeProvider:(id)a4;

- (void).cxx_destruct;
- (BOOL)addEphemeralContainerWithName:(id)a0;
- (void)addObserver:(id)a0 forCounter:(id)a1;
- (id)countersInDatePartition:(id)a0;
- (id)countersInEphemeralContainer:(id)a0;
- (id)datePartitions;
- (void)deactivateEphemeralContainerWithName:(id)a0;
- (double)durationForCounter:(id)a0 inDatePartition:(id)a1;
- (void)incrementCounter:(id)a0 by:(long long)a1;
- (void)pauseDurationCounter:(id)a0;
- (void)removeEphemeralContainerWithName:(id)a0;
- (void)resumeDurationCounter:(id)a0;
- (long long)sumOfCountersInDatePartition:(id)a0;
- (void)updateAllDurationCounters;
- (void)updateDurationCounter:(id)a0;
- (long long)valueForCounter:(id)a0 inDatePartition:(id)a1;
- (long long)valueForCounter:(id)a0 inEphemeralContainer:(id)a1;
- (void)addDuration:(double)a0 toCounter:(id)a1 endTime:(id)a2;
- (double)durationForCounter:(id)a0 inEphemeralContainer:(id)a1;
- (void)incrementCounter:(id)a0;
- (void)incrementCounter:(id)a0 inDatePartition:(id)a1 by:(long long)a2;
- (id)initWithCoreDataGroup:(id)a0 dateProvider:(id)a1 partitionProvider:(id)a2 coreDataStorage:(id)a3;
- (id)initWithCoreDataGroup:(id)a0 dateProvider:(id)a1 partitionProvider:(id)a2 coreDataStorage:(id)a3 uptimeProvider:(id)a4;
- (void)notifyObserversForCounter:(id)a0 previousCount:(long long)a1 newCount:(long long)a2;
- (id)observersForCounter:(id)a0;
- (long long)sumOfCountersInEphemeralContainer:(id)a0;
- (void)updateCountersBeforeSave;

@end
