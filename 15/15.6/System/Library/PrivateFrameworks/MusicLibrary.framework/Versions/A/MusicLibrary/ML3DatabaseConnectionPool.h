@class NSString, NSMutableDictionary, _ML3DatabaseConnectionSubPool, NSUUID, NSObject;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    char _useDistantWriterConnections;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _poolLockCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _poolLockMutex;
}

@property (nonatomic, getter=isClosed) char closed;
@property (readonly, nonatomic) NSString *databasePath;
@property (weak, nonatomic) id<ML3DatabaseConnectionPoolDelegate> delegate;
@property (readonly, nonatomic) unsigned long long maxReaders;
@property (readonly, nonatomic) unsigned long long maxWriters;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) char useDistantWriterConnections;
@property (readonly, nonatomic, getter=isLocked) char locked;
@property (readonly, nonatomic) char isCurrentThreadConnectionInTransaction;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (char)ownsConnection:(id)a0;
- (void)_closeConnectionsForOwningPoolClosed:(char)a0 andWaitForBusyConnections:(char)a1;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(char)a0;
- (id)_connectionForIdentifier:(id)a0;
- (id)_connectionForWriting:(char)a0 useThreadConnection:(char)a1 storeThreadLocalConnection:(char)a2;
- (id)_generateDiagnostic;
- (id)_localConnectionForThread:(id)a0;
- (void)_setConnection:(id)a0 forIdentifier:(id)a1;
- (void)_setLocalConnection:(id)a0 forThread:(id)a1;
- (void)checkInConnection:(id)a0;
- (void)closeAllConnections;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1 maxWriters:(unsigned long long)a2;
- (char)isClosedWithNoActiveOrBusyConnections;
- (void)lockAndCloseAllConnectionsForTermination;
- (id)readerConnection;
- (id)writerConnection;

@end
