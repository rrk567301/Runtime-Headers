@class NSURL, IFGraphicSymbolDescriptor, NSString;

@interface ISGraphicSymbolResource : NSObject <ISScalableCompositorResource>

@property (retain) IFGraphicSymbolDescriptor *descriptor;
@property (readonly) NSURL *url;
@property (retain) NSString *symbolName;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultResource;
+ (id)graphicSymbolResourceWithConfiguration:(id)a0 symbolName:(id)a1 url:(id)a2;
+ (id)graphicSymbolResourceWithRecipe:(id)a0 url:(id)a1;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)initWithGraphicSymbolDescriptor:(id)a0 symbolName:(id)a1 url:(id)a2;
- (void)updateDescriptorWithImageDescriptor:(id)a0;

@end
