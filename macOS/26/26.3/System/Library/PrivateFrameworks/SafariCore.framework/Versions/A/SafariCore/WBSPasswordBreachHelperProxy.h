@class NSXPCConnection;

@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)addResultRecordDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)runLookupSessionIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
