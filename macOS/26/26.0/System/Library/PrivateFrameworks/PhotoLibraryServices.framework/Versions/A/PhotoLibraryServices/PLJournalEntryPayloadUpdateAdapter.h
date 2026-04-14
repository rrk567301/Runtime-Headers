@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject *_managedObject;
}

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)initWithManagedObject:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (id)managedObject;
- (BOOL)isValidForJournalPersistence;
- (id)payloadsForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)sourceObject;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
