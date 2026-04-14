@class OADLineJoin, OADLineEnd, OADFill, OADColor, OADDash;

@interface OADStroke : OADProperties <NSCopying> {
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    unsigned char mIsColorOverridden : 1;
    unsigned char mIsWidthOverridden : 1;
    unsigned char mIsCapOverridden : 1;
    unsigned char mIsCompoundTypeOverridden : 1;
    unsigned char mIsPenAlignmentOverridden : 1;
}

@property (retain, nonatomic) OADLineEnd *head;
@property (retain, nonatomic) OADLineEnd *tail;

+ (id)defaultProperties;
+ (id)nullStroke;
+ (id)blackStroke;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)setWidth:(float)a0;
- (float)width;
- (id)color;
- (void)setColor:(id)a0;
- (id)fill;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (void)setFill:(id)a0;
- (void)setCompoundType:(unsigned char)a0;
- (void)setPenAlignment:(int)a0;
- (void)setDash:(id)a0;
- (void)setJoin:(id)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)isCapOverridden;
- (unsigned char)cap;
- (void)setCap:(unsigned char)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isColorOverridden;
- (BOOL)isWidthOverridden;
- (id)dash;
- (BOOL)isFillOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isHeadOverridden;
- (BOOL)isTailOverridden;
- (id)join;
- (unsigned char)compoundType;
- (int)penAlignment;

@end
