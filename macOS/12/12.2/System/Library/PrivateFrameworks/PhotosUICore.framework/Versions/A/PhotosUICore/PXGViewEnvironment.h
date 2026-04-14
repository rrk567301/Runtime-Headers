@class NSColor, NSAppearance;

@interface PXGViewEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) NSAppearance *effectiveAppearance;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) id traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) struct CGColor { } *selectionHighlightColor;
@property (readonly, nonatomic) BOOL accessibilityEnabled;
@property (readonly, nonatomic) BOOL wantsFocusRing;
@property (readonly, nonatomic) BOOL emphasized;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 accessibilityEnabled:(BOOL)a1;

@end
