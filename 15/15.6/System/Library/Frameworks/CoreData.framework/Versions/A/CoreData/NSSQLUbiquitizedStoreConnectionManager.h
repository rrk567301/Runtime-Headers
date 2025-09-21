@class NSSQLiteConnection;

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
    NSSQLiteConnection *_connection;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (char)handleStoreRequest:(id)a0;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (void)setExclusiveLockingMode:(char)a0;

@end
