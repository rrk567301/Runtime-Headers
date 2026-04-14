@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)memory;

@end
