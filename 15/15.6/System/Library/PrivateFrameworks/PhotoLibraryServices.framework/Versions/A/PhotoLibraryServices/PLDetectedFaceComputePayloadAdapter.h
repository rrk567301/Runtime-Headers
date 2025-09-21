@interface PLDetectedFaceComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)face;
- (char)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;

@end
