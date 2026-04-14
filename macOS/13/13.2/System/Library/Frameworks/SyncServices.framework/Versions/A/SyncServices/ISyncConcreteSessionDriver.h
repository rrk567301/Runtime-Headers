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
    BOOL _inCallback;
    BOOL _finishCalled;
    BOOL _handlesSyncAlerts;
    BOOL _failure;
    NSError *_lastError;
}

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)client;
- (id)dataSource;
- (BOOL)sync;
- (id)session;
- (void)_setDataSource:(id)a0;
- (id)lastError;
- (BOOL)_sync:(BOOL)a0;
- (id)_initWithDataSource:(id)a0;
- (void)finishSyncing;
- (BOOL)startAsynchronousSync:(id *)a0;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)handlesSyncAlerts;
- (void)_setClient:(id)a0;
- (void)_doAsynchronousSync;
- (void)_doFullyAsynchronousSync;
- (void)_client:(id)a0 mightWantToSyncEntityNames:(id)a1;
- (void)_hashDataSource;
- (void)_hashDelegate;
- (BOOL)_preSync;
- (void)_setLastError:(id)a0;
- (BOOL)_registerClient;
- (id)_lastAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;
- (id)_nextAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;
- (BOOL)_beginSyncSession:(BOOL)a0;
- (BOOL)_negotiateSyncSession;
- (BOOL)_pushPhaseOfSession;
- (BOOL)_pullPhaseOfSession;
- (BOOL)_finishSession;
- (void)_cancelSync:(id)a0;

@end
