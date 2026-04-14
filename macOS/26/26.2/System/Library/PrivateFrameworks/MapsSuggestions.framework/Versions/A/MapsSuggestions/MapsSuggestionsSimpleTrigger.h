@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)fire;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (void)didRemoveLastObserver;

@end
