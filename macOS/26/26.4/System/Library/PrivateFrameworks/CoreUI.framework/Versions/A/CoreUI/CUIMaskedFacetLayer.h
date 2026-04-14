@class CUIThemeFacet;

@interface CUIMaskedFacetLayer : CALayer

@property (nonatomic) struct CGPath { } *maskPath;
@property (retain, nonatomic) CUIThemeFacet *facet;
@property long long drawingLayer;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init;
- (void)dealloc;
- (void)updateRenditionKey:(id)a0 getFocus:(BOOL *)a1 userInfo:(id)a2;

@end
