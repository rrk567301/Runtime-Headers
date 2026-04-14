@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)fire;
- (id)initWithName:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0;

@end
