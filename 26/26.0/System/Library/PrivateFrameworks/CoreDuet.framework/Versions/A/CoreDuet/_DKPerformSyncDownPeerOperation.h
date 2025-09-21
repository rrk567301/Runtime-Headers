@class NSMutableArray, _DKSyncType, _DKSync2Policy, _DKSyncPeer;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSMutableArray *_operations;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)endOperation;

@end
