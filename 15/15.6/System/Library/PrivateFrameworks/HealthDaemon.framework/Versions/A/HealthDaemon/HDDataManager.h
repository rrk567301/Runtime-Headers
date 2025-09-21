@class NSNumber, NSString, NSMutableDictionary, HDProfile, NSObject, HDQuantitySeriesManager;
@protocol OS_dispatch_queue;

@interface HDDataManager : NSObject <HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observersByDataType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synchronousObserverLock;
    NSMutableDictionary *_synchronousObserversBySampleType;
    char _needsSynchronousNotification;
    unsigned long long _openTransactions;
    NSMutableDictionary *_pendingObjectsBySampleType;
    NSNumber *_lastAnchor;
    double _lastNotifyLogTime;
    long long _notifyCount;
    long long _samplesAddedCount;
    long long _samplesJournaledCount;
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (void)addObserver:(id)a0 forDataType:(id)a1;
- (void)addObserverForAllTypes:(id)a0;
- (void)addSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (void)closeObserverTransaction;
- (char)containsDataObject:(id)a0;
- (char)deleteDataObjects:(id)a0 restrictedSourceEntities:(id)a1 failIfNotFound:(char)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 error:(id *)a4;
- (char)deleteDataObjectsOfClass:(Class)a0 predicate:(id)a1 limit:(unsigned long long)a2 deletedSampleCount:(unsigned long long *)a3 notifyObservers:(char)a4 generateDeletedObjects:(char)a5 recursiveDeleteAuthorizationBlock:(id /* block */)a6 error:(id *)a7;
- (char)deleteDataObjectsOfClass:(Class)a0 predicate:(id)a1 limit:(unsigned long long)a2 deletedSampleCount:(unsigned long long *)a3 notifyObservers:(char)a4 generateDeletedObjects:(char)a5 userRequested:(char)a6 recursiveDeleteAuthorizationBlock:(id /* block */)a7 error:(id *)a8;
- (char)deleteObjectsWithUUIDCollection:(id)a0 configuration:(id)a1 error:(id *)a2;
- (char)deleteSamplesWithSourceEntities:(id)a0 error:(id *)a1;
- (char)deleteSamplesWithTypes:(id)a0 sourceBundleIdentifier:(id)a1 userRequested:(char)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 error:(id *)a4;
- (char)deleteSamplesWithTypes:(id)a0 sourceEntities:(id)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (char)deleteSamplesWithUUIDs:(id)a0 generateDeletedObjects:(char)a1 transaction:(id)a2 error:(id *)a3;
- (char)deleteSamplesWithUUIDs:(id)a0 userRequested:(char)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (long long)hasSampleWithBundleIdentifier:(id)a0 error:(id *)a1;
- (char)insertDataObjects:(id)a0 error:(id *)a1;
- (char)insertDataObjects:(id)a0 sourceEntity:(id)a1 deviceEntity:(id)a2 sourceVersion:(id)a3 creationDate:(double)a4 error:(id *)a5;
- (char)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 error:(id *)a3;
- (char)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(char)a3 error:(id *)a4;
- (char)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(char)a3 updateSourceOrder:(char)a4 resolveAssociations:(char)a5 error:(id *)a6;
- (void)openObserverTransaction;
- (void)removeObserver:(id)a0 forDataType:(id)a1;
- (void)removeObserverForAllTypes:(id)a0;
- (void)removeSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (void)setBackgroundObserverFrequency:(id)a0 forDataType:(id)a1 frequency:(long long)a2 appSDKVersionToken:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)shouldNotifyForDataObjects:(id)a0 provenance:(id)a1 database:(id)a2 anchor:(id)a3;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)a0 intervals:(id)a1 userRequested:(char)a2 transaction:(id)a3 anchor:(id)a4;
- (void)synchronouslyCloseObserverTransactionAndNotify;

@end
