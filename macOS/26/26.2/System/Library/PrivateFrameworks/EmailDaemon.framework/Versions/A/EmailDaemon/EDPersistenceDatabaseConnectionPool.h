@class NSMapTable, _EDPersistenceDatabaseConnectionWrapper, NSMutableSet, NSDate, NSLock;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject {
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    unsigned long long _minimumCachedReaderConnections;
    unsigned long long _totalCurrentReaderConnections;
    NSDate *_lastConnectionCreationTime;
    NSDate *_lastConnectionDisposalTime;
}

@property (weak, nonatomic) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) unsigned long long cacheSize;
@property (readonly, nonatomic) unsigned long long writersWaiting;

- (void)flush;
- (void)_unlockForConnectionType:(unsigned long long)a0 resource:(id)a1;
- (id)readerConnection;
- (id)_connectionWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)_lockForConnectionType:(unsigned long long)a0 resource:(id *)a1;
- (BOOL)_shouldAddReaderConnectionBackToCache;
- (id)init;
- (id)writerConnection;
- (id)initWithDelegate:(id)a0 minimumCachedReaderConnections:(unsigned long long)a1;
- (void)checkInConnection:(id)a0;
- (void)dealloc;

@end
