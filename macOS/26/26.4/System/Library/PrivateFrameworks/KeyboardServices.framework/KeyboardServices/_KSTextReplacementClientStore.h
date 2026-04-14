@class NSString, _KSTextReplacementServerConnection;

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {
    _KSTextReplacementServerConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (void)removeAllEntries;
- (id)textReplacementEntries;
- (void)cancelPendingUpdates;
- (void).cxx_destruct;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (id)init;
- (void)performTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)phraseShortcuts;
- (void)modifyEntry:(id)a0 toEntry:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
