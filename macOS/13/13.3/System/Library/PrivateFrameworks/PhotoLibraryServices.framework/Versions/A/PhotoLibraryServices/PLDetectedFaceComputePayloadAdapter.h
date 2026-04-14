@class PLDetectedFace;

@interface PLDetectedFaceComputePayloadAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    PLDetectedFace *_face;
}

- (void).cxx_destruct;
- (id)initWithDetectedFace:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)a0;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
