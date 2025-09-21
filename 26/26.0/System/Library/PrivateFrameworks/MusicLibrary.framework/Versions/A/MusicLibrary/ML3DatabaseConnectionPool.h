@class NSString, NSMutableDictionary, _ML3DatabaseConnectionSubPool, NSUUID, NSObject;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    BOOL _useDistantWriterConnections;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _poolLockCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _poolLockMutex;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) NSString *databasePath;
@property (weak, nonatomic) id<ML3DatabaseConnectionPoolDelegate> delegate;
@property (readonly, nonatomic) unsigned long long maxReaders;
@property (readonly, nonatomic) unsigned long long maxWriters;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) BOOL useDistantWriterConnections;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL isCurrentThreadConnectionInTransaction;

- (void)unlock;
- (void)lockAndCloseAllConnectionsForTermination;
- (id)debugDescription;
- (id)_generateDiagnostic;
- (void)dealloc;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (id)_connectionForIdentifier:(id)a0;
- (void)lock;
- (BOOL)isClosedWithNoActiveOrBusyConnections;
- (void)closeAllConnections;
- (id)_connectionForWriting:(BOOL)a0 useThreadConnection:(BOOL)a1 storeThreadLocalConnection:(BOOL)a2;
- (void)_setLocalConnection:(id)a0 forThread:(id)a1;
- (void)_setConnection:(id)a0 forIdentifier:(id)a1;
- (id)init;
- (BOOL)ownsConnection:(id)a0;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1 maxWriters:(unsigned long long)a2;
- (void)_closeConnectionsForOwningPoolClosed:(BOOL)a0 andWaitForBusyConnections:(BOOL)a1;
- (id)writerConnection;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1;
- (id)_localConnectionForThread:(id)a0;
- (id)readerConnection;
- (void)checkInConnection:(id)a0;
- (void).cxx_destruct;

@end
