@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (BOOL)isDataAccessEnabled;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (long long)changeTrackingBehaviors;
- (void)disableBabySitter;
- (id)init;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (void)enableBabySitter;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)disableDataAccess;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (BOOL)isBabySitterEnabled;
- (void)enableDataAccess;
- (id)initWithDaemonController:(id)a0;
- (void).cxx_destruct;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)applyChangeTrackingBehavior:(long long)a0;

@end
