@class PLGraphNodeContainer;

@interface PLSocialGroupPayloadAdapter : PLJournalEntryPayloadUpdateAdapter

@property (retain, nonatomic) PLGraphNodeContainer *nodeContainer;

- (id)initWithManagedObject:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)payloadID;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)sourceObject;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
