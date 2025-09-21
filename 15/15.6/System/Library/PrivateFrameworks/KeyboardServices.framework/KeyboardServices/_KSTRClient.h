@class NSString, _KSTextReplacementServer;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {
    _KSTextReplacementServer *_owner;
}

@property (nonatomic) long long generation;
@property (readonly, nonatomic) char hasReadAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOwner:(id)a0;
- (void)removeAllEntries;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withReply:(id /* block */)a2;
- (void)cancelPendingUpdatesWithReply:(id /* block */)a0;
- (id)initWithOwner:(id)a0 forConnection:(id)a1;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 reply:(id /* block */)a1;
- (void)requestSyncWithReply:(id /* block */)a0;

@end
