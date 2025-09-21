@interface OADVectorArcPathElement : OADPathElement {
    struct OADAdjustCoord { char isFormulaResult; int value; } mLeft;
    struct OADAdjustCoord { char isFormulaResult; int value; } mTop;
    struct OADAdjustCoord { char isFormulaResult; int value; } mRight;
    struct OADAdjustCoord { char isFormulaResult; int value; } mBottom;
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mStartVector;
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mEndVector;
    char mClockwise;
    char mConnectedToPrevious;
}

- (struct OADAdjustCoord { char x0; int x1; })top;
- (struct OADAdjustCoord { char x0; int x1; })bottom;
- (struct OADAdjustCoord { char x0; int x1; })left;
- (struct OADAdjustCoord { char x0; int x1; })right;
- (char)clockwise;
- (char)connectedToPrevious;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })endVector;
- (id)initWithLeft:(struct OADAdjustCoord { char x0; int x1; })a0 top:(struct OADAdjustCoord { char x0; int x1; })a1 right:(struct OADAdjustCoord { char x0; int x1; })a2 bottom:(struct OADAdjustCoord { char x0; int x1; })a3 startVector:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a4 endVector:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a5 clockwise:(char)a6 connectedToPrevious:(char)a7;
- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })startVector;

@end
