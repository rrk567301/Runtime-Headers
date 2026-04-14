@class NSSet;

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    NSSet *_suggestionTypes;
}

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidForJournalPersistence;
- (id)suggestion;
- (id)initWithManagedObject:(id)a0 suggestionTypes:(id)a1;

@end
