@class _DKSyncType, NSArray, _DKSyncHistory, NSDate, _DKSync2Policy, _DKSyncPeer;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage, _DKKeyValueStore;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_streamNames;
    char _highPriority;
    _DKSyncHistory *_history;
    id<_DKKeyValueStore> _keyValueStore;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    NSArray *_overlappingWindows;
    char _foundAdditions;
}

- (void).cxx_destruct;
- (char)isAsynchronous;
- (void)main;
- (void)endOperation;

@end
