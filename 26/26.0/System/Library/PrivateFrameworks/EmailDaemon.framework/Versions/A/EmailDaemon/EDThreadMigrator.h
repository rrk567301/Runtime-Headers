@class EDInMemoryThreadQueryHandler, EMThreadScope, EDThreadPersistence, NSString, NSHashTable, NSObject, EFLocked;
@protocol OS_os_log, EFScheduler;

@interface EDThreadMigrator : NSObject <EFLoggable> {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EFLocked *state;
@property (readonly, nonatomic) id<EFScheduler> workScheduler;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler;
@property (nonatomic) double threadFinalizationInterval;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (unsigned long long)signpostID;
- (void)reset;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (void)_failMigration;
- (void)_finishMigrating;
- (void)_migrateNextBatchWithGeneration:(unsigned long long)a0;
- (void)_scheduleFinalizationForBatchedObjectIDs:(id)a0 withGeneration:(unsigned long long)a1 forDelete:(BOOL)a2;
- (void)addObjectIDsToMigrate:(id)a0;
- (void)changeObjectIDsToMigrate:(id)a0;
- (void)deleteObjectIDsToMigrate:(id)a0;
- (id)initWithThreadScope:(id)a0 threadPersistence:(id)a1 queryHandler:(id)a2;
- (void)startObservingWithObserver:(id)a0;
- (void)stopObservingWithObserver:(id)a0;

@end
