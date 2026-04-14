@interface RBDisplayListTransform : NSObject <NSCopying> {
    struct Transform { struct vector<RB::DisplayList::Transform::Term, 1UL, unsigned int> { unsigned char _p[40]; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } _transform;
}

+ (id)transform;

- (void)removeAll;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyingToDisplayList:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyApplyingToDisplayList:(id)a0;
- (void)addColorReplacementFrom:(struct { float x0; float x1; float x2; float x3; })a0 to:(struct { float x0; float x1; float x2; float x3; })a1 colorSpace:(int)a2;
- (void)addFontInterpolationTo:(struct CGFont { } *)a0 by:(float)a1 flags:(unsigned int)a2;
- (void)applyToDisplayList:(id)a0;
- (void)addColorReplacementTo:(struct { float x0; float x1; float x2; float x3; })a0 colorSpace:(int)a1;

@end
