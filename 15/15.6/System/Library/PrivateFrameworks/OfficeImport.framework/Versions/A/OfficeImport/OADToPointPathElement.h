@interface OADToPointPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { char isFormulaResult; int value; } x; struct OADAdjustCoord { char isFormulaResult; int value; } y; } mToPoint;
    char mRelative;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })toPoint;
- (id)initWithToPoint:(struct OADAdjustPoint { struct OADAdjustCoord { char x0; int x1; } x0; struct OADAdjustCoord { char x0; int x1; } x1; })a0;
- (char)relative;
- (void)setRelative:(char)a0;

@end
