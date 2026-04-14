@class FI_IPropertyValueExtractor;

@interface FI_TKindAndSizePropertyValueExtractor : FI_IPropertyValueExtractor {
    FI_IPropertyValueExtractor *_kindExtractor;
    FI_IPropertyValueExtractor *_sizeExtractor;
}

- (void)flush;
- (id)defaultValue;
- (void).cxx_destruct;
- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
