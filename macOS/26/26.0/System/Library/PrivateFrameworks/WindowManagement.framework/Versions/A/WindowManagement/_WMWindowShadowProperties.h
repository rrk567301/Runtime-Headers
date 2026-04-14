@interface _WMWindowShadowProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property float activeRadius;
@property float activeDensity;
@property float activeVerticalOffset;
@property (getter=hasActiveHardRimStyle) BOOL activeHardRimStyle;
@property float activeRimDensity;
@property float activeRimRadius;
@property (getter=isActiveRimWhite) BOOL activeRimWhite;
@property float activeInnerRimDensity;
@property float activeInnerRimRadius;
@property (getter=isActiveInnerRimWhite) BOOL activeInnerRimWhite;
@property float inactiveRadius;
@property float inactiveDensity;
@property float inactiveVerticalOffset;
@property (getter=hasInactiveHardRimStyle) BOOL inactiveHardRimStyle;
@property float inactiveRimDensity;
@property float inactiveRimRadius;
@property (getter=isInactiveRimWhite) BOOL inactiveRimWhite;
@property float inactiveInnerRimDensity;
@property float inactiveInnerRimRadius;
@property (getter=isInactiveInnerRimWhite) BOOL inactiveInnerRimWhite;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
