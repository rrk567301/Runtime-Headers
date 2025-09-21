@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (char)checkScopeIsValidInTransaction:(id)a0;

@end
