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

- (int)order;
- (void)setOrder:(int)a0;
- (float)rightMargin;
- (id)description;
- (id)init;
- (void)setScale:(unsigned long long)a0;
- (void)setOrientation:(int)a0;
- (int)orientation;
- (float)leftMargin;
- (unsigned long long)scale;
- (float)topMargin;
- (float)bottomMargin;
- (void)setRightMargin:(float)a0;
- (void)setBottomMargin:(float)a0;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (unsigned long long)firstPageNumber;
- (void)setFitToHeight:(unsigned long long)a0;
- (BOOL)customFirstPageNumber;
- (unsigned long long)fitToHeight;
- (unsigned long long)fitToWidth;
- (float)footerMargin;
- (float)headerMargin;
- (void)setCustomFirstPageNumber:(BOOL)a0;
- (void)setFirstPageNumber:(unsigned long long)a0;
- (void)setFitToWidth:(unsigned long long)a0;
- (void)setFooterMargin:(float)a0;
- (void)setHeaderMargin:(float)a0;

@end
