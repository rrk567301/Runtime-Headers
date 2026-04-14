@interface PresetNameNumberProvider : ISDNameNumberProvider

- (void)reset;
- (void)invalidate;
- (id)initWithNameNumberMapping:(id)a0 takesPrecedence:(BOOL)a1 canBeReplaced:(BOOL)a2;

@end
