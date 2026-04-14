@class OADDrawable;

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
