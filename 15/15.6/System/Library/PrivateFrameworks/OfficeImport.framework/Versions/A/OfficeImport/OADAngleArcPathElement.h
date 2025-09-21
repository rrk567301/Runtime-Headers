@interface OADAngleArcPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mCenter;
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mSemiaxes;
    struct OADAdjustCoord { char isFormulaResult; int value; } mStartAngle;
    struct OADAdjustCoord { char isFormulaResult; int value; } mAngleLength;
    char mConnectedToPrevious;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })center;
- (struct OADAdjustCoord { char x0; int x1; })startAngle;
- (struct OADAdjustCoord { char x0; int x1; })angleLength;
- (char)connectedToPrevious;
- (id)initWithCenter:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a0 semiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a1 startAngle:(struct OADAdjustCoord { char x0; int x1; })a2 angleLength:(struct OADAdjustCoord { char x0; int x1; })a3 connectedToPrevious:(char)a4;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })semiaxes;

@end
