@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (void)applyChangeTrackingBehavior:(long long)a0;
- (void)enableBabySitter;
- (BOOL)isDataAccessEnabled;
- (void)disableDataAccess;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)_crashDaemonWithMessage:(id)a0;
- (void)disableBabySitter;
- (id)initWithDaemonController:(id)a0;
- (long long)changeTrackingBehaviors;
- (void).cxx_destruct;
- (id)fetchStatusReportsWithError:(id *)a0;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (id)init;
- (BOOL)isBabySitterEnabled;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (void)enableDataAccess;

@end
