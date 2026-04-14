@interface NSSnappingInfo : NSObject {
    struct CGSnappingInfo { } *_snappingInfo;
}

@property (readonly) struct CGSnappingInfo { } *CGSnappingInfo;

+ (id)snappingInfoWithWindowNumber:(long long)a0;

- (void)dealloc;
- (id)initWithWindowNumber:(long long)a0;
- (void)addMovementWithMouseLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)resetMovement;
- (void)snapOriginWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFramePointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)snapFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forResizingWithNewFramePointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 rectEdge:(unsigned int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sizeSnapRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snappedEdges:(unsigned long long)a1;
- (unsigned long long)snappedEdges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastSnappedRect;
- (struct CGPoint { double x0; double x1; })currentVelocity;

@end
