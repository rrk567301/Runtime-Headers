@class _DKSyncType, _DKSyncHistory, NSDate, _DKSync2Policy, _DKSyncPeer;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    char _highPriority;
    _DKSyncHistory *_history;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    char _foundDeletions;
}

- (void).cxx_destruct;
- (char)isAsynchronous;
- (void)main;
- (void)endOperation;

@end
