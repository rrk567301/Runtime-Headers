@class NSArray, _DKSyncType, _DKSync2Policy;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_insertedEvents;
    NSArray *_deletedEventIDs;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)endOperation;

@end
