@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)_updateForegroundDataclasses;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (id)stateString;
- (void).cxx_destruct;
- (void)setupProcessStateMonitor;
- (void)_setNewPriority;
- (id)init;
- (void)_setForegroundDataclasses:(long long)a0;
- (id)appIDsToDataclasses;
- (int)_recalculatePriority;
- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (void)dealloc;

@end
