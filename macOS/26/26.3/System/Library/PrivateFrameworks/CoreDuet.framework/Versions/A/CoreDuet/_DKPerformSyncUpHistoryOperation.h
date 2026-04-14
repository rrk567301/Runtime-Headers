@class _DKSyncType, _DKSyncPeer, _DKSync2Policy;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)endOperation;

@end
