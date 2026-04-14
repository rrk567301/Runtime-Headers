@interface EDPageSetup : NSObject {
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (id)description;
- (id)init;
- (void)setOrientation:(int)a0;
- (unsigned long long)scale;
- (int)order;
- (void)setScale:(unsigned long long)a0;
- (int)orientation;
- (void)setLeftMargin:(float)a0;
- (void)setRightMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (void)setBottomMargin:(float)a0;
- (float)leftMargin;
- (float)rightMargin;
- (float)topMargin;
- (float)bottomMargin;
- (void)setOrder:(int)a0;
- (BOOL)customFirstPageNumber;
- (void)setCustomFirstPageNumber:(BOOL)a0;
- (unsigned long long)firstPageNumber;
- (void)setFirstPageNumber:(unsigned long long)a0;
- (unsigned long long)fitToHeight;
- (void)setFitToHeight:(unsigned long long)a0;
- (unsigned long long)fitToWidth;
- (void)setFitToWidth:(unsigned long long)a0;
- (float)headerMargin;
- (void)setHeaderMargin:(float)a0;
- (float)footerMargin;
- (void)setFooterMargin:(float)a0;

@end
