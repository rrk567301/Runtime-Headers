@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (id)init;
- (void)invalidate;
- (void)clear;
- (char)isDefaultProvider;
- (void)makeIrreplaceable;

@end
