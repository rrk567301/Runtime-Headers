@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)drawable;
- (BOOL)isAnimateBackground;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(BOOL)a0;

@end
