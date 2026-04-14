@interface FI_IPropertyLastOpenedDateExtractor : FI_IPropertyDateExtractor

- (void)flush;
- (id)defaultValue;
- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
