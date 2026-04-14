@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (void)disableBabySitter;
- (BOOL)isDataAccessEnabled;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (BOOL)isBabySitterEnabled;
- (long long)changeTrackingBehaviors;
- (id)init;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (id)initWithDaemonController:(id)a0;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)enableDataAccess;
- (void).cxx_destruct;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)disableDataAccess;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)enableBabySitter;

@end
