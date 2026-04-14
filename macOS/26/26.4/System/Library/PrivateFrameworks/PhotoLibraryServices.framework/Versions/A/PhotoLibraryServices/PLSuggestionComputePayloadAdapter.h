@class NSSet;

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    NSSet *_suggestionTypes;
}

- (id)payloadID;
- (id)suggestion;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (void).cxx_destruct;
- (id)payloadIDForTombstone:(id)a0;
- (id)initWithManagedObject:(id)a0 suggestionTypes:(id)a1;

@end
