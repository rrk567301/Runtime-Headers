@interface CPLEngineForceProcessingStagedScopesTask : CPLEngineForceSyncTask

- (id)description;
- (BOOL)forcingProcessedStagedScopes;
- (BOOL)bypassForceSyncLimitations;
- (id)initWithEngineLibrary:(id)a0 delegate:(id)a1;

@end
