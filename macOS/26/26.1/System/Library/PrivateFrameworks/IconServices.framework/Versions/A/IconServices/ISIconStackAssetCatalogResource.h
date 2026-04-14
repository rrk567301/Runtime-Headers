@class ISGenerationReport, NSMutableDictionary, NSString;

@interface ISIconStackAssetCatalogResource : ISAssetCatalogResource <ISIconStackResource, ISLayerScalableCompositorResource>

@property (readonly, nonatomic) BOOL usesExternalCompositor;
@property (nonatomic) unsigned long long languageDirection;
@property (nonatomic) unsigned long long platformStyle;
@property (nonatomic) unsigned long long shape;
@property (readonly) NSMutableDictionary *finalizedIcons;
@property (readonly) unsigned long long platform;
@property (retain) ISGenerationReport *generationReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)_compositingDescriptorWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_fallbackImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_finalizedIconForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_keyForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)iconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithCatalog:(id)a0 imageName:(id)a1 platform:(unsigned long long)a2;
- (id)layerDataForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
