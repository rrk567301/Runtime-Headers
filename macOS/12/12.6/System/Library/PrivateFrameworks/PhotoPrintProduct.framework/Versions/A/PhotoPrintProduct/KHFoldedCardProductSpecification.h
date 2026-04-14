@interface KHFoldedCardProductSpecification : KHProductSpecification

- (struct CGSize { double x0; double x1; })coverPageSize;
- (id)pageNameForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1 withSeedTreatment:(id)a2;
- (void)performAutoflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (void)ensureSectionsForProject:(id)a0;
- (id)printComponentsForProject:(id)a0;
- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)a0;
- (BOOL)autoflowWouldExceedPageCount:(long long)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2;
- (void)ensureComponentsForProject:(id)a0;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1;

@end
