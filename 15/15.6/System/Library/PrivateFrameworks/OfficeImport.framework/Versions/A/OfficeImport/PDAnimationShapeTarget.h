@class OADDrawable;

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
