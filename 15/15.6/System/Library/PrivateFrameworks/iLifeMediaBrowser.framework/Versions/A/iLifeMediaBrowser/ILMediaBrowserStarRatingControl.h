@class NSString, NSDictionary;

@interface ILMediaBrowserStarRatingControl : NSControl {
    NSString *mStarString;
    NSString *mBulletString;
    NSDictionary *mTextAttrs;
    NSDictionary *mTextDimAttrs;
    long long mIntValue;
    id mTarget;
    SEL mSelector;
    char mIsTracking;
    struct CGSize { double width; double height; } mStarSize;
    char mDrawBorder;
    char mDrawBackground;
    long long mMinimumRanking;
    long long mMaximumRanking;
    char mShouldAcceptFirstMouse;
    char mShouldHandleKeyDown;
    double mFontSize;
    double mExtraSpacing;
}

- (void)dealloc;
- (long long)integerValue;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (char)acceptsFirstMouse:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isTracking;
- (void)mouseDown:(id)a0;
- (void)setFontSize:(double)a0;
- (void)setIntValue:(long long)a0;
- (void)setDrawBackground:(char)a0;
- (void)setDrawBorder:(char)a0;
- (void)_setup:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adaptToFrame;
- (long long)constrainedRankingValue:(long long)a0;
- (double)extraMargin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontSize:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontSize:(double)a1 extraSpacing:(double)a2;
- (long long)rankingValue;
- (void)setEnabledColor:(id)a0 disabledColor:(id)a1;
- (void)setEnabledColor:(id)a0 disabledColor:(id)a1 backgroundColor:(id)a2;
- (void)setExtraSpacing:(double)a0;
- (void)setMinimum:(long long)a0 maximum:(long long)a1;
- (void)setRankingValue:(long long)a0;
- (void)setShouldAcceptFirstMouse:(char)a0;
- (void)setShouldHandleKeyDown:(char)a0;
- (double)starWidth;

@end
