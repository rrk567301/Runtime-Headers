@class PLGraphNodeContainer;

@interface PLAssetComputeSyncNodeContainerPayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    PLGraphNodeContainer *_nodeContainer;
}

- (id)initWithManagedObject:(id)a0;
- (void).cxx_destruct;
- (id)sourceObject;

@end
