@interface FI_TPropertyColumnPreviewKindExtractor : FI_TPropertyKindExtractor

- (id)defaultValue;
- (id)init;
- (void)flush;
- (id)extractValueFromNodes:(const void *)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
