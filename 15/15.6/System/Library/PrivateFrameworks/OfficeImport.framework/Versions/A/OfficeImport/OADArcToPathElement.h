@interface OADArcToPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mSemiaxes;
    struct OADAdjustCoord { char isFormulaResult; int value; } mStartAngle;
    struct OADAdjustCoord { char isFormulaResult; int value; } mAngleLength;
}

- (struct OADAdjustCoord { char x0; int x1; })startAngle;
- (struct OADAdjustCoord { char x0; int x1; })angleLength;
- (id)initWithSemiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a0 startAngle:(struct OADAdjustCoord { char x0; int x1; })a1 angleLength:(struct OADAdjustCoord { char x0; int x1; })a2;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })semiaxes;

@end
