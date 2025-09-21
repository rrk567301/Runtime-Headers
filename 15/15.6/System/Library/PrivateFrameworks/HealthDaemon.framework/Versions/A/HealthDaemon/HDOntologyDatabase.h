@class HKObserverSet, NSString, HDProfile, HDOntologyBackingStore;

@interface HDOntologyDatabase : NSObject <HDOntologyBackingStoreObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKObserverSet *_databaseAvailableObservers;
}

@property (retain, nonatomic) HDOntologyBackingStore *unitTesting_ontologyBackingStore;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic, getter=isAvailable) char available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ontologyContentVersionWithTransaction:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)addOntologyDatabaseAvailabilityObserver:(id)a0;
- (void)invalidateAndWait;
- (void)ontologyBackingStore:(id)a0 didBecomeAvailable:(char)a1;
- (id)ontologyContentVersionWithError:(id *)a0;
- (char)performTransactionWithDatabaseTransaction:(id)a0 error:(id *)a1 transactionHandler:(id /* block */)a2;
- (char)performTransactionWithError:(id *)a0 transactionHandler:(id /* block */)a1;
- (void)removeOntologyDatabaseAvailabilityObserver:(id)a0;
- (void)unitTesting_close;
- (char)unitTesting_performWriteTransactionWithError:(id *)a0 transactionHandler:(id /* block */)a1;
- (id)unitTesting_schemaVersionWithError:(id *)a0;

@end
