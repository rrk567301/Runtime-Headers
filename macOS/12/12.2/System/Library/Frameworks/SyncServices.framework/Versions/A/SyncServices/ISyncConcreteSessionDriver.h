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
- (BOOL)sync;
- (id)session;
- (id)dataSource;
- (void)_setDataSource:(id)a0;
- (id)lastError;
- (void)finishSyncing;
- (BOOL)_sync:(BOOL)a0;
- (id)_initWithDataSource:(id)a0;
- (BOOL)startAsynchronousSync:(id *)a0;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)handlesSyncAlerts;
- (void)_setClient:(id)a0;
- (void)_hashDataSource;
- (void)_hashDelegate;
- (BOOL)_registerClient;
- (BOOL)_finishSession;
- (void)_setLastError:(id)a0;
- (BOOL)_beginSyncSession:(BOOL)a0;
- (BOOL)_preSync;
- (BOOL)_negotiateSyncSession;
- (BOOL)_pushPhaseOfSession;
- (BOOL)_pullPhaseOfSession;
- (void)_cancelSync:(id)a0;
- (void)_doAsynchronousSync;
- (void)_doFullyAsynchronousSync;
- (void)_client:(id)a0 mightWantToSyncEntityNames:(id)a1;
- (id)_lastAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;
- (id)_nextAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;

@end
