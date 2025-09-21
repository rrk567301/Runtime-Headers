@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)init;
- (void).cxx_destruct;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (char)_getBoolForKey:(id)a0 withDefaultValue:(char)a1;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)_setBoolValue:(char)a0 forBehaviorKey:(id)a1;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (long long)changeTrackingBehaviors;
- (void)disableBabySitter;
- (void)disableDataAccess;
- (void)enableBabySitter;
- (void)enableDataAccess;
- (id)fetchStatusReportsWithError:(id *)a0;
- (id)initWithDaemonController:(id)a0;
- (char)isBabySitterEnabled;
- (char)isDataAccessEnabled;
- (void)unapplyChangeTrackingBehavior:(long long)a0;

@end
