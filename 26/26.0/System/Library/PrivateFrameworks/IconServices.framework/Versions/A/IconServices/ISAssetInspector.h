@class ISAssetCatalogResource, IFBundle;

@interface ISAssetInspector : NSObject

@property (readonly) IFBundle *bundle;
@property (retain, nonatomic) ISAssetCatalogResource *assetCatalogResource;

- (void).cxx_destruct;
- (BOOL)assetExistsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)catalogAssetAppearances;
- (id)initWithBundleURL:(id)a0;

@end
