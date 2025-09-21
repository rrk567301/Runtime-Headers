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

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)altDescription;
- (id)altTitle;
- (id)clickHyperlink;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)hasAltDescription;
- (char)hasAltTitle;
- (char)hasAspectRatioLocked;
- (char)hasClickHyperlink;
- (char)hasHoverHyperlink;
- (char)hasOrientedBounds;
- (char)hasWrdInline;
- (id)hoverHyperlink;
- (char)isAspectRatioLocked;
- (char)isWrdInline;
- (id)orientedBounds;
- (id)orientedBoundsForCharts;
- (void)removeUnnecessaryOverrides;
- (void)setAltDescription:(id)a0;
- (void)setAltTitle:(id)a0;
- (void)setAspectRatioLocked:(char)a0;
- (void)setClickHyperlink:(id)a0;
- (void)setHoverHyperlink:(id)a0;
- (void)setOrientedBounds:(id)a0;
- (void)setWrdInline:(char)a0;

@end
