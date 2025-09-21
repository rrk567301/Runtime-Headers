@class NSColor, NSAppearance;

@interface PXGViewEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) NSAppearance *effectiveAppearance;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) id traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) struct CGColor { } *checkmarkColor;
@property (readonly, nonatomic) struct CGColor { } *focusRingColor;
@property (readonly, nonatomic) char accessibilityEnabled;
@property (readonly, nonatomic) char wantsFocusRing;
@property (readonly, nonatomic) char emphasized;
@property (readonly, nonatomic) char isBeingFullPageSnapshotted;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)hasDifferentColorAppearanceComparedTo:(id)a0;
- (char)hasEqualAppearanceTo:(id)a0;
- (id)initWithView:(id)a0 accessibilityEnabled:(char)a1 isBeingFullPageSnapshotted:(char)a2;

@end
