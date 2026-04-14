@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)fire;
- (id)initWithName:(id)a0;

@end
