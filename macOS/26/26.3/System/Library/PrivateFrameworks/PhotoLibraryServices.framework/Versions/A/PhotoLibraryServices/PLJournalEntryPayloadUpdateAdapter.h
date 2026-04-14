@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject *_managedObject;
}

- (id)initWithManagedObject:(id)a0;
- (id)managedObject;
- (id)payloadForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)payloadID;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (id)sourceObject;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
