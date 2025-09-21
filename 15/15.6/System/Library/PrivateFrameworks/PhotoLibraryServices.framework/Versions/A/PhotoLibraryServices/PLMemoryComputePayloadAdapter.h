@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)memory;
- (char)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;

@end
