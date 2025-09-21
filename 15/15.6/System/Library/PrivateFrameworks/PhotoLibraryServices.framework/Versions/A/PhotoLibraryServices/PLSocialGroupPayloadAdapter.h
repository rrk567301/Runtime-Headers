@class PLGraphNodeContainer;

@interface PLSocialGroupPayloadAdapter : PLJournalEntryPayloadUpdateAdapter

@property (retain, nonatomic) PLGraphNodeContainer *nodeContainer;

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)sourceObject;
- (char)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (char)validForPersistenceChangedForChangedKeys:(id)a0;

@end
