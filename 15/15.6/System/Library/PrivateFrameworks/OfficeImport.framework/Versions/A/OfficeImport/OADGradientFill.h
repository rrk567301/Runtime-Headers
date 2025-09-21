@class NSArray, OADShade, OADRelativeRect;

@interface OADGradientFill : OADFill {
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    char mIsFlipModeOverridden;
    char mRotateWithShape;
    char mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)tileRect;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (void)setStops:(id)a0;
- (id)stops;
- (char)rotateWithShape;
- (char)areStopsOverridden;
- (id)firstStop;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (char)isAnythingOverridden;
- (char)isFlipModeOverridden;
- (char)isRotateWithShapeOverridden;
- (char)isShadeOverridden;
- (char)isTileRectOverridden;
- (id)lastStop;
- (void)removeUnnecessaryOverrides;
- (void)setFlipMode:(int)a0;
- (void)setRotateWithShape:(char)a0;
- (void)setShade:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setTileRect:(id)a0;
- (id)shade;
- (void)sortStops;
- (char)usesPlaceholderColor;

@end
