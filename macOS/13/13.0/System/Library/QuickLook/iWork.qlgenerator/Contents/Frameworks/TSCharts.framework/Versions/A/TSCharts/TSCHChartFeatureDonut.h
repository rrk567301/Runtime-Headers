@interface TSCHChartFeatureDonut : TSCHChartFeaturePieFamily

- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (BOOL)supportsCalloutLines;
- (Class)presetImagerClass;
- (id)defaultDataFileName;
- (float)defaultLabelExplosionPercentage;
- (BOOL)supportsPlaceTitleAtCenter;
- (double)minInnerRadiusPercentage;
- (double)maxInnerRadiusPercentage;

@end
