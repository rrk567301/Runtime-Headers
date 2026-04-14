@interface SCTToolbarGRL : SCTGRL

- (id)state;
- (id)toolbar;
- (id)availableStates;
- (void)setState:(id)a0;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (id)fullTitle;
- (id)initWithResource:(id)a0 withParent:(id)a1;
- (void)showState:(id)a0;

@end
