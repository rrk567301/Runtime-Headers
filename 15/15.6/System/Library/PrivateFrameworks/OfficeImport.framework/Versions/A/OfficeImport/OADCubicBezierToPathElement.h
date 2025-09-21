@interface OADCubicBezierToPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mControlPoint1;
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mControlPoint2;
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mToPoint;
    char mRelative;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })toPoint;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })controlPoint1;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })controlPoint2;
- (id)initWithControlPoint1:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a0 controlPoint2:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a1 toPoint:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a2;
- (char)relative;
- (void)setRelative:(char)a0;

@end
