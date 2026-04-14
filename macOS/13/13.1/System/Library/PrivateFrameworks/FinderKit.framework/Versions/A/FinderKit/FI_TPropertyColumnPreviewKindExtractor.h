@interface FI_TPropertyColumnPreviewKindExtractor : FI_TPropertyKindExtractor

- (id)init;
- (id)defaultValue;
- (void)flush;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;
- (id)extractValueFromNodes:(const void *)a0;

@end
