@class NSString, NSArray, ISICRCompositor, ISCompositingDescriptor, ISGenerationReport;

@interface ISDynamicIconStackResource : NSObject <ISScalableCompositorResource, ISIconStackResource, ISLayerScalableCompositorResource>

@property (copy) ISICRCompositor *icrCompositor;
@property (readonly) NSString *typeIdentifier;
@property (readonly) NSArray *layerGroups;
@property (retain) ISCompositingDescriptor *compositingDescriptor;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long platform;
@property (retain) ISGenerationReport *generationReport;

- (id)initWithTypeIdentifier:(id)a0 layerGroups:(id)a1;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)_compositingDescriptorWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)baseIconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)iconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)layerDataForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
