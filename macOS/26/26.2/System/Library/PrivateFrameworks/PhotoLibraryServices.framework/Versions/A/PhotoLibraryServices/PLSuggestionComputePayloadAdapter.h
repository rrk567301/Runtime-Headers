@class NSSet;

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    NSSet *_suggestionTypes;
}

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (id)suggestion;
- (BOOL)isValidForJournalPersistence;
- (void).cxx_destruct;
- (id)payloadIDForTombstone:(id)a0;
- (id)initWithManagedObject:(id)a0 suggestionTypes:(id)a1;

@end
