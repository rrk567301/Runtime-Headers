@class OADDrawable;

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
