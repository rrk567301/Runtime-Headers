@interface _WMWindowShadowProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property float activeRadius;
@property float activeDensity;
@property float activeVerticalOffset;
@property (getter=hasActiveHardRimStyle) char activeHardRimStyle;
@property float activeRimDensity;
@property (getter=hasActiveClipTop) char activeClipTop;
@property float inactiveRadius;
@property float inactiveDensity;
@property float inactiveVerticalOffset;
@property (getter=hasInactiveHardRimStyle) char inactiveHardRimStyle;
@property float inactiveRimDensity;
@property (getter=hasInactiveClipTop) char inactiveClipTop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
