@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (void)clear;
- (void)invalidate;
- (BOOL)isDefaultProvider;
- (id)init;
- (void)makeIrreplaceable;

@end
