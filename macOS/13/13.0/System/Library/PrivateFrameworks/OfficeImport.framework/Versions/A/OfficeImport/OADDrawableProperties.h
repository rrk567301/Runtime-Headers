@class OADHyperlink, NSString, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties {
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned char mHasAspectRatioLocked : 1;
    unsigned char mAspectRatioLocked : 1;
    unsigned char mHasWrdInline : 1;
    unsigned char mWrdInline : 1;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)clickHyperlink;
- (void)setClickHyperlink:(id)a0;
- (id)hoverHyperlink;
- (void)setHoverHyperlink:(id)a0;
- (BOOL)hasOrientedBounds;
- (BOOL)hasClickHyperlink;
- (BOOL)hasHoverHyperlink;
- (BOOL)hasAltTitle;
- (id)orientedBoundsForCharts;
- (id)orientedBounds;
- (void)setOrientedBounds:(id)a0;
- (BOOL)isAspectRatioLocked;
- (void)setAspectRatioLocked:(BOOL)a0;
- (BOOL)hasAspectRatioLocked;
- (BOOL)isWrdInline;
- (void)setWrdInline:(BOOL)a0;
- (BOOL)hasWrdInline;
- (id)altTitle;
- (void)setAltTitle:(id)a0;
- (id)altDescription;
- (void)setAltDescription:(id)a0;
- (BOOL)hasAltDescription;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
