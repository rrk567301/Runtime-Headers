@interface SCTToolbarGRL : SCTGRL

- (id)state;
- (void)setState:(id)a0;
- (id)toolbar;
- (id)initWithResource:(id)a0 withParent:(id)a1;
- (id)fullTitle;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (void)showState:(id)a0;
- (id)availableStates;

@end
