@interface FI_TPropertyColumnPreviewSizeExtractor : FI_TPropertyLogicalSizeExtractor

- (id)defaultValue;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;
- (id)extractValueFromNodes:(const void *)a0;
- (id)computeValue;

@end
