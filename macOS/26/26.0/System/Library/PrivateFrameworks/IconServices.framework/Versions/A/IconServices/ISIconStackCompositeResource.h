@class NSString, NSMutableDictionary, ISCompositingDescriptor, ISGenerationReport;
@protocol ISScalableCompositorResource;

@interface ISIconStackCompositeResource : NSObject <ISScalableCompositorResource, ISIconStackResource, ISLayerScalableCompositorResource>

@property (readonly) id<ISScalableCompositorResource> wrappedResource;
@property (readonly) unsigned long long platform;
@property (retain) ISCompositingDescriptor *compositingDescriptor;
@property (readonly) NSMutableDictionary *finalizedIcons;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) ISGenerationReport *generationReport;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (long long)assetAppearance;
- (id)_fallbackImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_finalizedIconForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_keyForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)iconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithResource:(id)a0 platform:(unsigned long long)a1;
- (id)layerDataForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
