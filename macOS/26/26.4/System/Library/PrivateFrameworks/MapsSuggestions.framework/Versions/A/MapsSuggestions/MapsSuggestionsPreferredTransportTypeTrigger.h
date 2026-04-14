@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void).cxx_destruct;
- (id)init;

@end
