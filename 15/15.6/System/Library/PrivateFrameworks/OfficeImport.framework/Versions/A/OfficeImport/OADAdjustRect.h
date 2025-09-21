@interface OADAdjustRect : NSObject {
    struct OADAdjustCoord { char isFormulaResult; int value; } mLeft;
    struct OADAdjustCoord { char isFormulaResult; int value; } mTop;
    struct OADAdjustCoord { char isFormulaResult; int value; } mRight;
    struct OADAdjustCoord { char isFormulaResult; int value; } mBottom;
}

- (id)description;
- (struct OADAdjustCoord { char x0; int x1; })top;
- (struct OADAdjustCoord { char x0; int x1; })bottom;
- (struct OADAdjustCoord { char x0; int x1; })left;
- (struct OADAdjustCoord { char x0; int x1; })right;
- (id)initWithLeft:(struct OADAdjustCoord { char x0; int x1; })a0 top:(struct OADAdjustCoord { char x0; int x1; })a1 right:(struct OADAdjustCoord { char x0; int x1; })a2 bottom:(struct OADAdjustCoord { char x0; int x1; })a3;

@end
