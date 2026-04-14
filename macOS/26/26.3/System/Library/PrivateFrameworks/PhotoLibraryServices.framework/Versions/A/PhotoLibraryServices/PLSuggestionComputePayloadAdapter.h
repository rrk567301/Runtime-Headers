@class NSSet;

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    NSSet *_suggestionTypes;
}

- (id)suggestion;
- (id)payloadForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)payloadID;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)initWithManagedObject:(id)a0 suggestionTypes:(id)a1;

@end
