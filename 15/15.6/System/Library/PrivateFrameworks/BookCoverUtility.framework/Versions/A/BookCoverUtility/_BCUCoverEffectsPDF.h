@class NSString, BCULayerRenderer;

@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {
    BCULayerRenderer *_renderer;
    char _image;
    char _shadow;
    char _night;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char supportsOptions;

- (void).cxx_destruct;
- (id)_layerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 minificationFilter:(id)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_roundedInsetsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)coverLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2;
- (id)initWithIdentifier:(id)a0 renderer:(id)a1 image:(char)a2 shadow:(char)a3 night:(char)a4;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForSize:(struct CGSize { double x0; double x1; })a0 contentsScale:(double)a1 options:(id)a2;
- (id)newOperationWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 priority:(float)a3 options:(id)a4 waitForCPUSynchronization:(char)a5 logKey:(id)a6 completion:(id /* block */)a7;
- (id)shadowLayerWithImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 kind:(unsigned long long)a3;

@end
