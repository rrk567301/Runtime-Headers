@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)memory;

@end
