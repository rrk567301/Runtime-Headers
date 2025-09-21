@interface PresetNameNumberProvider : ISDNameNumberProvider

- (void)invalidate;
- (void)reset;
- (id)initWithNameNumberMapping:(id)a0 takesPrecedence:(char)a1 canBeReplaced:(char)a2;

@end
