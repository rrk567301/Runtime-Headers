@class NSString, NSDictionary;

@interface ILMediaBrowserStarRatingControl : NSControl {
    NSString *mStarString;
    NSString *mBulletString;
    NSDictionary *mTextAttrs;
    NSDictionary *mTextDimAttrs;
    long long mIntValue;
    id mTarget;
    SEL mSelector;
    BOOL mIsTracking;
    struct CGSize { double width; double height; } mStarSize;
    BOOL mDrawBorder;
    BOOL mDrawBackground;
    long long mMinimumRanking;
    long long mMaximumRanking;
    BOOL mShouldAcceptFirstMouse;
    BOOL mShouldHandleKeyDown;
    double mFontSize;
    double mExtraSpacing;
}

- (void)dealloc;
- (long long)integerValue;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIntValue:(long long)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)isTracking;
- (void)setFontSize:(double)a0;
- (void)setDrawBackground:(BOOL)a0;
- (void)setDrawBorder:(BOOL)a0;
- (void)_setup:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRankingValue:(long long)a0;
- (void)setExtraSpacing:(double)a0;
- (long long)rankingValue;
- (void)setEnabledColor:(id)a0 disabledColor:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontSize:(double)a1 extraSpacing:(double)a2;
- (long long)constrainedRankingValue:(long long)a0;
- (double)starWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontSize:(double)a1;
- (void)adaptToFrame;
- (void)setEnabledColor:(id)a0 disabledColor:(id)a1 backgroundColor:(id)a2;
- (double)extraMargin;
- (void)setMinimum:(long long)a0 maximum:(long long)a1;
- (void)setShouldAcceptFirstMouse:(BOOL)a0;
- (void)setShouldHandleKeyDown:(BOOL)a0;

@end
