@class NSString;

@interface ABSyncManager : NSObject

@property (class, readonly) ABSyncManager *sharedSyncManager;
@property (class, readonly) NSString *toolPath;

+ (id)clientID;
+ (id)defaultClientID;
+ (id)os_log;
+ (id)debugPath;
+ (id)productionPath;
+ (id)toolName;

- (void)_abSyncProcessDied:(id)a0;
- (void)removeExisitingSyncSchedule;
- (BOOL)isSyncScheduled;
- (BOOL)canExecProcesses;
- (void)scheduleTrickleSync;
- (void)scheduleTrickleSyncRetry:(unsigned long long)a0;
- (void)scheduleTrickleSyncWithRequest:(id)a0;
- (void)inProcess_scheduleTrickleSyncWithRequest:(id)a0;
- (void)outOfProcess_scheduleTrickleSyncWithRequest:(id)a0;

@end
