@class NSString, CUICatalog, IFImageBag;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>

@property (readonly) CUICatalog *catalog;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSString *imageName;
@property (readonly) NSString *symbolName;
@property (readonly) long long catalogAppearance;
@property long long layoutDirection;
@property char disableSubtype;
@property (readonly) unsigned long long platform;
@property long long appearance;
@property (readonly, getter=isPrecomposed) char precomposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 error:(id *)a2;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 platform:(unsigned long long)a2 error:(id *)a3;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 symbolName:(id)a2 platform:(unsigned long long)a3 error:(id *)a4;
+ (id)assetCatalogResourceWithURL:(id)a0 symbolName:(id)a1 error:(id *)a2;
+ (id)coreGlyphsCatalog;

- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (char)hasDarkResource;
- (long long)_layoutDirectionFromDevice;
- (char)hasResourceWithAppearance:(long long)a0;
- (char)hasResourceWithAppearance:(long long)a0 appearanceString:(id)a1;
- (char)hasTintableResource;
- (id)imageWithName:(id)a0 scale:(double)a1;
- (id)initWithCatalog:(id)a0 imageName:(id)a1 symbolName:(id)a2 platform:(unsigned long long)a3;
- (id)symbolImageForFontSize:(double)a0 scale:(double)a1 symbolSize:(unsigned long long)a2 symbolWeight:(long long)a3;
- (id)symbolImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
