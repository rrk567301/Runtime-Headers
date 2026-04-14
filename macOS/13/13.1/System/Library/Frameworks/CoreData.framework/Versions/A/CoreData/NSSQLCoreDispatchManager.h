@class NSMutableArray, NSSQLCore;

@interface NSSQLCoreDispatchManager : NSObject {
    NSSQLCore *_sqlCore;
    NSMutableArray *_connectionManagers;
}

- (void)dealloc;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;
- (void)scheduleBarrierBlock:(id /* block */)a0;

@end
