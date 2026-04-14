@interface FI_IPropertyModificationDateExtractor : FI_IPropertyDateExtractor

- (id)defaultValue;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
