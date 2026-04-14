@interface FI_TPropertyColumnPreviewKindExtractor : FI_TPropertyKindExtractor

- (void)flush;
- (id)defaultValue;
- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
