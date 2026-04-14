@interface FI_TPropertyColumnPreviewKindExtractor : FI_TPropertyKindExtractor

- (id)defaultValue;
- (void)flush;
- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
