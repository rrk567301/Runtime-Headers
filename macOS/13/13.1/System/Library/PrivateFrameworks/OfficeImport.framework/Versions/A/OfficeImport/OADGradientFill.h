@class NSArray, OADShade, OADRelativeRect;

@interface OADGradientFill : OADFill {
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)tileRect;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (id)stops;
- (void)setStops:(id)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;
- (BOOL)isAnythingOverridden;
- (BOOL)areStopsOverridden;
- (BOOL)isTileRectOverridden;
- (BOOL)isShadeOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (void)sortStops;
- (void)setTileRect:(id)a0;
- (int)flipMode;
- (void)setFlipMode:(int)a0;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (id)shade;
- (void)setShade:(id)a0;
- (id)firstStop;
- (id)lastStop;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
