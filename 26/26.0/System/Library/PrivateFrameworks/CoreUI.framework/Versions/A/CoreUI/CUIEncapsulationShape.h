@interface CUIEncapsulationShape : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ backing;
}

+ (id)newRoundedRectWithCornerRadius:(double)a0;
+ (double)defaultRoundedRectCornerRadius;
+ (id)newCapsule;
+ (id)newCircle;
+ (id)newRoundedRect;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (long long)graphicVariantShape;
- (const struct CGPath { } *)pathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (const struct CGPath { } *)pathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1;

@end
