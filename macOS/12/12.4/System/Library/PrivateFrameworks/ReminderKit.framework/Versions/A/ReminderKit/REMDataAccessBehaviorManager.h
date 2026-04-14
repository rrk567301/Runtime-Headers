@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonController:(id)a0;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (long long)changeTrackingBehaviors;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (id)fetchStatusReportsWithError:(id *)a0;
- (BOOL)isDataAccessEnabled;
- (void)enableDataAccess;
- (void)disableDataAccess;
- (BOOL)isBabySitterEnabled;
- (void)enableBabySitter;
- (void)disableBabySitter;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void)unapplyChangeTrackingBehavior:(long long)a0;

@end
