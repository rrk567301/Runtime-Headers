@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (void)invalidate;
- (void)clear;
- (id)init;
- (BOOL)isDefaultProvider;
- (void)makeIrreplaceable;

@end
