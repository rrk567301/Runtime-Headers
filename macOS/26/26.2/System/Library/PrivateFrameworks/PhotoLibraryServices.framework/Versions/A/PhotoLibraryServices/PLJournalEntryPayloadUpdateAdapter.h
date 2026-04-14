@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject *_managedObject;
}

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (id)managedObject;
- (id)payloadIDForTombstone:(id)a0;
- (id)sourceObject;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
