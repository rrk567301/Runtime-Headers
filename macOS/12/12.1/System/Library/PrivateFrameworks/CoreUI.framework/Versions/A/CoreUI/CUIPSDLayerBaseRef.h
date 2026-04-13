@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject

@property (retain, nonatomic) CUIPSDImageRef *imageRef;
@property (nonatomic) unsigned int layerIndex;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL visibility;
@property (readonly) double opacity;
@property (readonly) double fillOpacity;
@property (readonly) int blendMode;
@property (readonly) BOOL hasLayerMask;
@property (readonly) BOOL hasVectorMask;

- (void)dealloc;
- (id)name;
- (BOOL)isLayerGroup;
- (void *)_psdLayerRecord;
- (id)_psdImageRef;
- (id)layerMaskRef;
- (id)vectorMaskRef;
- (struct CGImage { } *)_createMaskFromAlphaChannel:(long long)a0;

@end
