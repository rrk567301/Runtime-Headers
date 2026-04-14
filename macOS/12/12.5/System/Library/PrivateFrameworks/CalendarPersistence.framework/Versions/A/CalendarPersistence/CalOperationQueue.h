@class NSCountedSet, NSString, CalManagedObjectContext, NSOperationQueue, NSMutableArray, NSManagedObjectID;

@interface CalOperationQueue : NSObject {
    NSOperationQueue *_queue;
    NSMutableArray *_operations;
    NSMutableArray *_debugOperations;
    NSCountedSet *_writeOperationsCountedSet;
    CalManagedObjectContext *_context;
    long long _lastSequenceNumberProcessed;
}

@property (readonly, retain) NSManagedObjectID *objectID;
@property (retain) NSString *sessionID;

- (void)run;
- (void)dealloc;
- (void)invalidate;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)operations;
- (BOOL)isBusy;
- (void)managedObjectContextDidSave:(id)a0;
- (id)initWithSessionID:(id)a0;
- (void)removeOperation:(id)a0;
- (void)processChangeRequests;
- (id)initWithSessionID:(id)a0 testConnection:(BOOL)a1;
- (id)initWithSessionID:(id)a0 testConnection:(BOOL)a1 sessionIDIsObjectID:(BOOL)a2;
- (void)_createQueueContext;
- (void)calendarStoreResetExternally:(id)a0;
- (void)testConnection;
- (void)_fetchPersistentOperations;
- (void)_removeOperationInvokedByQueue:(id)a0 andExecute:(BOOL)a1 saveContextIfNeeded:(BOOL)a2;
- (void)_notifyListenersThatOperationFinished:(id)a0;
- (void)_fetchPersistentOperationsInvokedByQueueAndExecute:(BOOL)a0;
- (id)_persistentOperationsForSessionID:(id)a0 largerThanSequenceNumber:(long long)a1 inManagedObjectContext:(id)a2;
- (void)_addOperationInvokedByQueue:(id)a0 andExecute:(BOOL)a1;
- (void)executeOperations;
- (void)_fetchPersistentOperationsInvokedByQueue;
- (void)_performSelectorOnQueue:(SEL)a0 withObject:(id)a1;
- (void)_notifyListenersQueueChanged;
- (void)_removeOperationInvokedByQueue:(id)a0;
- (void)_addOperationInvokedByQueue:(id)a0;
- (void)_testConnectionInvokedByQueue;
- (void)_revertOperationInvokedByQueue:(id)a0;
- (void)addOperationToInternalQueue:(id)a0;
- (void)_calendarStoreResetExternallyInvokedByQueue:(id)a0;
- (void)_mergeChangesFromContextDidSaveNotificationInvokedByQueue:(id)a0;
- (void)revertOperation:(id)a0;
- (BOOL)isItemLocallyModifiedForObjectID:(id)a0;

@end
