@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (void)clear;
- (void)invalidate;
- (id)init;
- (BOOL)isDefaultProvider;
- (void)makeIrreplaceable;

@end
