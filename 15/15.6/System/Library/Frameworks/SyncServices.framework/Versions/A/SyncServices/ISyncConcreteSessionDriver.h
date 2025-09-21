@class ISyncClient, NSError, ISyncSession, NSObject, NSMutableArray;
@protocol ISyncSessionDriverDataSource;

@interface ISyncConcreteSessionDriver : ISyncSessionDriver {
    ISyncClient *_client;
    ISyncSession *_session;
    NSObject<ISyncSessionDriverDataSource> *_dataSource;
    id _delegate;
    long long _dataSourceSupportedMethodsHash;
    long long _delegateSupportedMethodsHash;
    NSMutableArray *_filteredEntityNames;
    char _inCallback;
    char _finishCalled;
    char _handlesSyncAlerts;
    char _failure;
    NSError *_lastError;
}

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)client;
- (char)sync;
- (id)session;
- (void)_setDataSource:(id)a0;
- (id)dataSource;
- (id)lastError;
- (id)_initWithDataSource:(id)a0;
- (char)_sync:(char)a0;
- (char)_beginSyncSession:(char)a0;
- (void)_cancelSync:(id)a0;
- (void)_hashDataSource;
- (char)_registerClient;
- (void)_client:(id)a0 mightWantToSyncEntityNames:(id)a1;
- (void)_doAsynchronousSync;
- (void)_doFullyAsynchronousSync;
- (char)_finishSession;
- (void)_hashDelegate;
- (id)_lastAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(char *)a1;
- (char)_negotiateSyncSession;
- (id)_nextAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(char *)a1;
- (char)_preSync;
- (char)_pullPhaseOfSession;
- (char)_pushPhaseOfSession;
- (void)_setClient:(id)a0;
- (void)_setLastError:(id)a0;
- (void)finishSyncing;
- (char)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(char)a0;
- (char)startAsynchronousSync:(id *)a0;

@end
