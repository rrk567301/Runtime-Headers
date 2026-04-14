@interface FI_IPropertyLastOpenedDateExtractor : FI_IPropertyDateExtractor

- (id)defaultValue;
- (void)flush;
- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
