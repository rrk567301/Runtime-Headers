@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (void)setupProcessStateMonitor;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (void)_updateForegroundDataclasses;
- (void)_setForegroundDataclasses:(long long)a0;
- (id)stateString;
- (int)_recalculatePriority;
- (void)dealloc;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)_setNewPriority;
- (void).cxx_destruct;
- (id)appIDsToDataclasses;
- (id)init;

@end
