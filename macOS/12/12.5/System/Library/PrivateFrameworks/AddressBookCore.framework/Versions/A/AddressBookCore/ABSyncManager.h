@interface ABSyncManager : NSObject

+ (id)clientID;
+ (id)sharedSyncManager;
+ (id)defaultClientID;
+ (id)toolPath;
+ (id)productionPath;
+ (id)toolName;
+ (id)debugPath;

- (void)scheduleTrickleSyncWithOptions:(id)a0;
- (void)scheduleTrickleSyncRetry:(unsigned long long)a0;
- (BOOL)canExecProcesses;
- (void)removeExisitingSyncSchedule;
- (BOOL)isSyncScheduled;
- (void)_abSyncProcessDied:(id)a0;
- (void)scheduleTrickleSync;

@end
