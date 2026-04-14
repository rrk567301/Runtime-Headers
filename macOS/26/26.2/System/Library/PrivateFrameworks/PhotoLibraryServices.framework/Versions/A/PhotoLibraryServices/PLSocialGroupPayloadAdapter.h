@class PLGraphNodeContainer;

@interface PLSocialGroupPayloadAdapter : PLJournalEntryPayloadUpdateAdapter

@property (retain, nonatomic) PLGraphNodeContainer *nodeContainer;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (id)sourceObject;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
