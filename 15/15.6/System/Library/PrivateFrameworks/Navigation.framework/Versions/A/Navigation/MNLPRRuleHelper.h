@interface MNLPRRuleHelper : NSObject

- (id)workQueue;
- (void)_findResourceNamesForRegions:(id)a0 forceUpdate:(char)a1 asyncCompletion:(id /* block */)a2;
- (void)_loadRules:(id)a0 asyncCompletion:(id /* block */)a1;
- (void)fetchRulesForWaypoints:(id)a0 forceUpdateManifest:(char)a1 forceUpdateRules:(char)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)prefetchRulesForWaypoints:(id)a0;

@end
