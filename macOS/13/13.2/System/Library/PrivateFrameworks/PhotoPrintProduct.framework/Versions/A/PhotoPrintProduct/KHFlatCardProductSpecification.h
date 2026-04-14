@interface KHFlatCardProductSpecification : KHProductSpecification

- (id)pageNameForLayoutAtIndex:(unsigned long long)a0 inProject:(id)a1;
- (void)ensureSectionsForProject:(id)a0;
- (void)performAutoflowForProject:(id)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2 params:(id)a3;
- (BOOL)autoflowWouldExceedPageCount:(long long)a0 withTheme:(id)a1 andPhotoAnalyzer:(id)a2;
- (void)generateEmptyLayoutsForProject:(id)a0 withTheme:(id)a1 params:(id)a2;
- (void)ensureComponentsForProject:(id)a0;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1 withSeedTreatment:(id)a2;
- (id)defaultBackgroundTreatmentForLayout:(id)a0 inProject:(id)a1;

@end
