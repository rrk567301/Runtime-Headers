@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void).cxx_destruct;
- (id)init;

@end
