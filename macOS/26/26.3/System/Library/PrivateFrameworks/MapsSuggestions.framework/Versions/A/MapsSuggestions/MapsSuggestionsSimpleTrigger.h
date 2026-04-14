@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (void)fire;

@end
