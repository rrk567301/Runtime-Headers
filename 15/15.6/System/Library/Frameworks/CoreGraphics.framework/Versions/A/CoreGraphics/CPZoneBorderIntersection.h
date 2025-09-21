@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } intersectionRect;
    CPZoneBorder *intersectingBorder;
    char forwardVector;
    char backwardVector;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)backwardVector;
- (long long)comparePositionLengthwise:(id)a0;
- (char)forwardVector;
- (id)initSuper;
- (id)intersectingBorder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectionRect;
- (void)setBackwardVector:(char)a0;
- (void)setForwardVector:(char)a0;
- (void)setIntersectingBorder:(id)a0;
- (void)setIntersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
