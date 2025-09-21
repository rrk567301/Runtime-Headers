@class CUIThemeFacet;

@interface CUIMaskedFacetLayer : CALayer

@property (nonatomic) struct CGPath { } *maskPath;
@property (retain, nonatomic) CUIThemeFacet *facet;
@property long long drawingLayer;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init;
- (void)updateRenditionKey:(id)a0 getFocus:(BOOL *)a1 userInfo:(id)a2;

@end
