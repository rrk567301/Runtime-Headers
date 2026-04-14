@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (void)vendPriorityManagers;
+ (id)sharedManager;

- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (id)appIDsToDataclasses;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)a0;
- (void)setupProcessStateMonitor;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (void).cxx_destruct;
- (id)stateString;
- (void)_setNewPriority;
- (void)_updateForegroundDataclasses;
- (id)init;
- (void)dealloc;

@end
