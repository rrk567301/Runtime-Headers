@class NSColor, CALayer;

@interface _MKCalloutLayer : _MKResizingLayer {
    struct CGImage { } *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
}

@property (nonatomic) long long arrowPosition;
@property (nonatomic) double arrowOffset;
@property (retain, nonatomic) NSColor *fillColor;
@property (retain, nonatomic) NSColor *strokeColor;
@property (nonatomic) struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; BOOL useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; BOOL alignDetailViewBaseline; BOOL scaleVerticalPaddingForDynamicType; struct NSEdgeInsets { double top; double left; double bottom; double right; } padding; } metrics;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })_contentSize;
- (void)setContentsScale:(double)a0;
- (struct CGImage { } *)_newContentImage;

@end
