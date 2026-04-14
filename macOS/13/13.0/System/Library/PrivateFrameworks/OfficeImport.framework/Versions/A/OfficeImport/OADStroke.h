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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setWidth:(float)a0;
- (float)width;
- (id)color;
- (void)setColor:(id)a0;
- (id)fill;
- (void)setFill:(id)a0;
- (void)setParent:(id)a0;
- (unsigned char)cap;
- (id)initWithDefaults;
- (id)join;
- (void)setStyleColor:(id)a0;
- (BOOL)isColorOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isWidthOverridden;
- (id)dash;
- (BOOL)isFillOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isHeadOverridden;
- (BOOL)isTailOverridden;
- (BOOL)isCapOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isPenAlignmentOverridden;
- (void)setDash:(id)a0;
- (void)setJoin:(id)a0;
- (void)setCap:(unsigned char)a0;
- (unsigned char)compoundType;
- (void)setCompoundType:(unsigned char)a0;
- (int)penAlignment;
- (void)setPenAlignment:(int)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
