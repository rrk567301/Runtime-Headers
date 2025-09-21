@class OADDrawable;

@interface PDBuild : NSObject {
    char mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)drawable;
- (char)isAnimateBackground;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(char)a0;

@end
