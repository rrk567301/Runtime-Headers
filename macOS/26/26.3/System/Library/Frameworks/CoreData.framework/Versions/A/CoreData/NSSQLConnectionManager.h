@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {
    NSSQLCore *_sqlCore;
    id /* block */ _filter;
}

- (void)disconnectAllConnections;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (BOOL)handleStoreRequest:(id)a0;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (id)sqlCore;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;

@end
