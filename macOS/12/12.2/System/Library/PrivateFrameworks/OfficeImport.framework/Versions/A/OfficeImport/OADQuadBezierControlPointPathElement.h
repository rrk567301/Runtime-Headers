@interface OADQuadBezierControlPointPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mControlPoint;
}

- (id)initWithControlPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })controlPoint;

@end
