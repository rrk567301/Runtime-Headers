@class NSString;
@protocol ISVariantResourceProtocol;

@interface ISCompositorResourceAdapter : NSObject <ISScalableCompositorResource>

@property (readonly) id<ISVariantResourceProtocol> variantResource;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)initWithVariantResource:(id)a0;

@end
