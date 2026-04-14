@interface KHHardcoverProductSpecification : KHProductSpecification

- (struct CGSize { double x0; double x1; })coverPageSize;
- (struct CGSize { double x0; double x1; })flapPageSize;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (unsigned long long)outsideComponentCount;
- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (id)_pieOuterCrustUsingPhotoAnalyzer:(id)a0 withTheme:(id)a1 params:(id)a2;
- (void)ensureComponentsForProject:(id)a0;
- (long long)coverComponentCount;

@end
