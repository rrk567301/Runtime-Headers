@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)memory;

@end
