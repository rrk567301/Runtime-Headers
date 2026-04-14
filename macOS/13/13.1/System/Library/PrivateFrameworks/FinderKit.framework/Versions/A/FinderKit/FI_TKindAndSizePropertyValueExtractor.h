@class FI_IPropertyValueExtractor;

@interface FI_TKindAndSizePropertyValueExtractor : FI_IPropertyValueExtractor {
    FI_IPropertyValueExtractor *_kindExtractor;
    FI_IPropertyValueExtractor *_sizeExtractor;
}

- (id)init;
- (void).cxx_destruct;
- (id)defaultValue;
- (void)flush;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
