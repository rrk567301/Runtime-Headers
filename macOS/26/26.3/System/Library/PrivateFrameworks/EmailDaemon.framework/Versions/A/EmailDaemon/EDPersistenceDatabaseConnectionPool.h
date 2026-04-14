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

- (id)writerConnection;
- (id)readerConnection;
- (void)checkInConnection:(id)a0;
- (id)init;
- (void)_unlockForConnectionType:(unsigned long long)a0 resource:(id)a1;
- (BOOL)_lockForConnectionType:(unsigned long long)a0 resource:(id *)a1;
- (void)flush;
- (id)initWithDelegate:(id)a0 minimumCachedReaderConnections:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_shouldAddReaderConnectionBackToCache;
- (id)_connectionWithType:(unsigned long long)a0;

@end
