@class IFImageBag, NSString, IFColor, CUICatalog;
@protocol ISCompositorRecipe;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>

@property (readonly) CUICatalog *catalog;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSString *imageName;
@property (readonly) long long assetAppearance;
@property long long layoutDirection;
@property BOOL disableSubtype;
@property unsigned long long platform;
@property long long appearance;
@property long long appearanceVariant;
@property (retain) IFColor *tintColor;
@property unsigned long long background;
@property BOOL shouldApplyMask;
@property (retain) id<ISCompositorRecipe> suggestedRecipe;
@property (readonly, getter=isPrecomposed) BOOL precomposed;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 platform:(unsigned long long)a2 isAppLike:(BOOL)a3 error:(id *)a4;
+ (id)assetCatalogResourceWithURL:(id)a0 error:(id *)a1;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 error:(id *)a2;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 platform:(unsigned long long)a2 error:(id *)a3;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (BOOL)hasDarkResource;
- (long long)_layoutDirectionFromDevice;
- (void)_tagForLongLife:(struct CGImage { } *)a0;
- (BOOL)hasResourceWithAppearance:(long long)a0;
- (BOOL)hasResourceWithAppearance:(long long)a0 appearanceString:(id)a1;
- (BOOL)hasTintableResource;
- (id)imageWithName:(id)a0 scale:(double)a1;
- (id)initWithCatalog:(id)a0 imageName:(id)a1 platform:(unsigned long long)a2;

@end
