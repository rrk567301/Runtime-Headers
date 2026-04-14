@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)initWithDaemonController:(id)a0;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)enableBabySitter;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (long long)changeTrackingBehaviors;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (void)disableBabySitter;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void).cxx_destruct;
- (void)enableDataAccess;
- (id)fetchStatusReportsWithError:(id *)a0;
- (BOOL)isBabySitterEnabled;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (BOOL)isDataAccessEnabled;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (id)init;
- (void)disableDataAccess;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;

@end
