@interface PXCuratedLibraryAssetsSectionConfigurator : PXAssetsSectionConfigurator

+ (BOOL)assetCollectionRepresentsMonthsChapter:(id)a0;
+ (id)createSectionConfiguratorForSpec:(id)a0 type:(long long)a1;

- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (id)updatedHeaderLayout:(id)a0 withHeaderStyle:(long long)a1 forAssetSectionLayout:(id)a2;

@end
