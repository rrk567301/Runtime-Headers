@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {
    NSSQLCore *_sqlCore;
    id /* block */ _filter;
}

- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (BOOL)handleStoreRequest:(id)a0;
- (id)sqlCore;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)dealloc;

@end
