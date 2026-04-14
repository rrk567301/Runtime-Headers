@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)memory;

@end
