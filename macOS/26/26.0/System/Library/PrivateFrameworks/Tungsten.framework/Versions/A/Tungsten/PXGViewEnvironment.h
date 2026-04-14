@class NSColor, NSAppearance;

@interface PXGViewEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) NSAppearance *effectiveAppearance;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) id traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection;
@property (readonly, nonatomic) struct CGColor { } *checkmarkColor;
@property (readonly, nonatomic) struct CGColor { } *focusRingColor;
@property (readonly, nonatomic) BOOL accessibilityEnabled;
@property (readonly, nonatomic) BOOL wantsFocusRing;
@property (readonly, nonatomic) BOOL emphasized;
@property (readonly, nonatomic) BOOL isBeingFullPageSnapshotted;

+ (BOOL)_hideFocusRing;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 accessibilityEnabled:(BOOL)a1 isBeingFullPageSnapshotted:(BOOL)a2;
- (BOOL)hasDifferentColorAppearanceComparedTo:(id)a0;
- (BOOL)hasEqualAppearanceTo:(id)a0;

@end
