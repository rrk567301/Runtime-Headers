@class NSMutableDictionary, NSTimer, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, ML3MediaLibraryWriterDelegate;

@interface ML3MediaLibraryWriter : NSObject {
    NSTimer *_watchdogTimer;
    char _activeSiriIndexOperation;
    char _activeSpotlightIndexOperation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *transactionMap;
@property (readonly, nonatomic) NSOperationQueue *databaseOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *databaseOperationSerialQueue;
@property (readonly, nonatomic) NSOperationQueue *databaseOperationLimitedQueue;
@property (weak, nonatomic) id<ML3MediaLibraryWriterDelegate> delegate;
@property (nonatomic) double transactionTimeout;
@property (nonatomic, getter=isSuspended) char suspended;

+ (id)writerErrorWithCode:(long long)a0 description:(id)a1;
+ (id)writerErrorWithCode:(long long)a0 description:(id)a1 userInfo:(id)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_watchdogTimerFired:(id)a0;
- (id)_allDatabaseOperations;
- (id)_createNewTransactionForLibrary:(id)a0 fromClient:(id)a1 readOnly:(char)a2;
- (void)_destroyTransaction:(id)a0 forceRelinquishConnection:(char)a1;
- (void)_destroyTransactionForIdentifier:(id)a0 forceRelinquishConnection:(char)a1;
- (void)_registerTransaction:(id)a0;
- (void)_setupWatchdogTimer;
- (char)_shouldWatchdogTransaction:(id)a0;
- (void)_tearDownWatchdogTimer;
- (id)_transactionForIdentifier:(id)a0;
- (void)_unregisterTransaction:(id)a0;
- (id)beginTransactionForLibrary:(id)a0 withClient:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)cancelActiveTransactionForClient:(id)a0;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(char)a0;
- (void)cancelAllActiveTransactions;
- (void)cancelDatabaseOperationsForClient:(id)a0 completion:(id /* block */)a1;
- (char)endTransaction:(id)a0 shouldCommit:(char)a1 error:(id *)a2;
- (id)executeQuery:(id)a0 withParameters:(id)a1 options:(id)a2 onTransaction:(id)a3 error:(id *)a4;
- (id)executeUntrustedQuery:(id)a0 withParameters:(id)a1 options:(id)a2 onTransaction:(id)a3 error:(id *)a4;
- (char)executeUntrustedUpdate:(id)a0 withParameters:(id)a1 onTransaction:(id)a2 error:(id *)a3;
- (char)executeUpdate:(id)a0 withParameters:(id)a1 onTransaction:(id)a2 error:(id *)a3;
- (void)performDatabaseOperation:(unsigned long long)a0 onLibrary:(id)a1 withAttributes:(id)a2 options:(id)a3 fromClient:(id)a4 completionHandler:(id /* block */)a5;

@end
