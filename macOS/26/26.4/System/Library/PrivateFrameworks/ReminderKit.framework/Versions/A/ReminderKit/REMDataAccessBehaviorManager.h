@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (long long)changeTrackingBehaviors;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)disableDataAccess;
- (BOOL)isBabySitterEnabled;
- (void)enableBabySitter;
- (void)_crashDaemonWithMessage:(id)a0;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)disableBabySitter;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void).cxx_destruct;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)enableDataAccess;
- (id)init;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (BOOL)isDataAccessEnabled;
- (id)initWithDaemonController:(id)a0;

@end
