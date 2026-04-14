@class NSCountedSet, MPCPlaybackEngineEvent, NSString, NSHashTable, MSVSQLDatabase, NSMutableArray, NSObject;
@protocol MPCPlabackEngineEventStreamTestingDelegate, OS_dispatch_queue;

@interface MPCPlaybackEngineEventStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deferralAssertionsLock;
    BOOL _invalidated;
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    NSMutableArray *_cachedEvents;
    NSCountedSet *_cacheMisses;
    NSCountedSet *_cacheHits;
    MSVSQLDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
    long long _scheduledFlushes;
}

@property (weak, nonatomic) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (readonly, nonatomic) NSString *engineID;

- (void)dealloc;
- (id)debugDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)flushEvents;
- (id)initWithDatabaseCreationBlock:(id /* block */)a0;
- (void)addConsumer:(id)a0;
- (void)removeConsumer:(id)a0;
- (id)eventDeliveryDeferralAssertionForReason:(id)a0 timeout:(double)a1;
- (id)eventDeliveryDeferralAssertionForReason:(id)a0;
- (void)emitEventType:(id)a0 payload:(id)a1;
- (void)emitEventType:(id)a0 payload:(id)a1 atTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2;
- (void)flushEventsWithConsumer:(id)a0 fromTimestamp:(unsigned long long)a1 untilTimestamp:(unsigned long long)a2;
- (id)lastEventsWithCount:(long long)a0;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)a0;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)a0;

@end
