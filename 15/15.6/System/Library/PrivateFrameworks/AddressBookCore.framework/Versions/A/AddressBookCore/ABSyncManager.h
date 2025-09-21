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

- (void)scheduleTrickleSyncWithRequest:(id)a0;
- (char)isSyncScheduled;
- (void)_abSyncProcessDied:(id)a0;
- (char)canExecProcesses;
- (void)inProcess_scheduleTrickleSyncWithRequest:(id)a0;
- (void)outOfProcess_scheduleTrickleSyncWithRequest:(id)a0;
- (void)removeExisitingSyncSchedule;
- (void)scheduleTrickleSync;
- (void)scheduleTrickleSyncRetry:(unsigned long long)a0;

@end
