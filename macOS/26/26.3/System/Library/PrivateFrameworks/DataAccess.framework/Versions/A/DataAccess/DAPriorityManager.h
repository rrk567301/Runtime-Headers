@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (void)vendPriorityManagers;
+ (id)sharedManager;

- (id)stateString;
- (void)_setForegroundDataclasses:(long long)a0;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (void)_setNewPriority;
- (id)init;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (void)_updateForegroundDataclasses;
- (void).cxx_destruct;
- (id)appIDsToDataclasses;
- (int)_recalculatePriority;
- (void)dealloc;
- (void)setupProcessStateMonitor;

@end
