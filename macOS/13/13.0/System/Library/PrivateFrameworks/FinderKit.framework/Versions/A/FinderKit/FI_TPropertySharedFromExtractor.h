@interface FI_TPropertySharedFromExtractor : FI_IPropertyValueExtractor

- (id)defaultValue;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
