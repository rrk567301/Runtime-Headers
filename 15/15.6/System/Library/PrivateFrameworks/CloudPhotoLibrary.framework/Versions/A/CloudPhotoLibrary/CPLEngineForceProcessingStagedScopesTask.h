@interface CPLEngineForceProcessingStagedScopesTask : CPLEngineForceSyncTask

- (id)description;
- (id)initWithEngineLibrary:(id)a0 delegate:(id)a1;
- (char)bypassForceSyncLimitations;
- (char)forcingProcessedStagedScopes;

@end
