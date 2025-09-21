@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator

@property (nonatomic) long long zoomStep;
@property (nonatomic) char aspectFitContent;
@property (readonly, nonatomic) char supportsAspectRatioToggle;

- (void)_configureGridLayout:(id)a0 inSectionLayout:(id)a1;
- (struct CGSize { double x0; double x1; })_interItemSpacingForLayout:(id)a0 forSpec:(id)a1;
- (char)_layoutHasIndividualItems:(id)a0 forSpec:(id)a1;
- (char)_layoutIsAspectFit:(id)a0 forSpec:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedSizeOfSectionForAssetCollection:(id)a0 isCurated:(char)a1 numberOfAssets:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (long long)numberOfZoomStepsWithDataSource:(id)a0;

@end
