@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didAddFirstObserver;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didRemoveLastObserver;
- (void)fire;
- (id)initWithName:(id)a0;

@end
