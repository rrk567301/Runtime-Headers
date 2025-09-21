@class PLGraphNodeContainer;

@interface PLSocialGroupPayloadAdapter : PLJournalEntryPayloadUpdateAdapter

@property (retain, nonatomic) PLGraphNodeContainer *nodeContainer;

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)initWithManagedObject:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (void).cxx_destruct;
- (id)sourceObject;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
