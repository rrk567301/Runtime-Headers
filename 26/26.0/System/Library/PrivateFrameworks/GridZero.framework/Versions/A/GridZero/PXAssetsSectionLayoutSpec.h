@class NSShadow, PXAssetsSectionConfigurator, NSMutableDictionary, PXZoomablePhotosLayoutSpec;
@protocol PXAssetsSectionLayoutSpecConfiguratorSource;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {
    NSMutableDictionary *_configuratorByType;
    NSShadow *_shadow;
}

@property (readonly, nonatomic) BOOL supportsGridAspectRatioToggle;
@property (readonly, nonatomic) PXAssetsSectionConfigurator *gridConfigurator;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *zoomableSpec;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) double shadowCornerRadius;
@property (readonly, nonatomic) BOOL userInterfaceStyleAllowsShadow;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) long long preferredUserInterfaceStyle;
@property (readonly, nonatomic) BOOL disableConfigurators;
@property (weak, nonatomic) id<PXAssetsSectionLayoutSpecConfiguratorSource> configuratorSource;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2 itemCornerRadius:(double)a3 zoomableSpec:(id)a4;
- (id)_sectionConfiguratorForType:(long long)a0;
- (BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)a0;
- (long long)numberOfGridZoomStepsWithDataSource:(id)a0;
- (id)sectionConfiguratorForAssetCollection:(id)a0 inZoomLevel:(long long)a1;

@end
