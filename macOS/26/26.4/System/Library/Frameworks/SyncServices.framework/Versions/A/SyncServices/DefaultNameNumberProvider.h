@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (void)clear;
- (BOOL)isDefaultProvider;
- (void)invalidate;
- (id)init;
- (void)makeIrreplaceable;

@end
