@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)drawable;
- (BOOL)isAnimateBackground;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(BOOL)a0;

@end
