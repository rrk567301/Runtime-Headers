@class NSString, ISIconDecoration;
@protocol ISScalableCompositorResource;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource>

@property (readonly) id<ISScalableCompositorResource> internalResource;
@property (readonly) ISIconDecoration *decoration;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (void)configureWithType:(id)a0;
- (id)initWithDecoration:(id)a0;

@end
