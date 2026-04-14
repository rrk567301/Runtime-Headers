@interface KHHardcoverProductSpecification : KHProductSpecification

- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (void)ensureComponentsForProject:(id)a0;
- (unsigned long long)outsideComponentCount;
- (id)_pieOuterCrustUsingPhotoAnalyzer:(id)a0 withTheme:(id)a1 params:(id)a2;
- (struct CGSize { double x0; double x1; })coverPageSize;
- (struct CGSize { double x0; double x1; })flapPageSize;
- (long long)coverComponentCount;

@end
