@class CHSWidgetMargins, NSDictionary, NSString, CHSVersionedWidgetMetrics;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) BOOL use32BitFloats;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CHSVersionedWidgetMetrics *currentVersionedWidgetMetrics;
@property (readonly, copy, nonatomic) CHSVersionedWidgetMetrics *luckierVersionedWidgetMetrics;
@property (readonly, copy, nonatomic) CHSVersionedWidgetMetrics *crystalglowVersionedWidgetMetrics;
@property (readonly, copy, nonatomic) CHSVersionedWidgetMetrics *dawnburstVersionedWidgetMetrics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned long long dynamicTextSupport;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, copy, nonatomic) CHSWidgetMargins *margins;
@property (readonly, copy, nonatomic) CHSWidgetMargins *groupMargins;
@property (readonly, nonatomic) NSDictionary *nestedContentMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_replaceFontStyleIn:(id)a0 withTextSizeAdjustment:(long long)a1;
+ (void)_removeSafeAreaInsetsIn:(id)a0;
+ (id)sha256DataFromData:(id)a0;

- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (double)_effectiveCornerRadius;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupLayoutInsets;
- (id)initWithXPCDictionary:(id)a0;
- (long long)textSizeAdjustment;
- (struct CGSize { double x0; double x1; })scale;
- (id)_stringKeyRepresentationForVersion:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupSafeAreaInsets;
- (BOOL)_hasZeroLayoutInsets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 textSizeAdjustment:(long long)a3;
- (unsigned long long)hashUsing32BitFloats:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 margins:(id)a4 supportsDynamicText:(unsigned long long)a5 widgetGroupMargins:(id)a6 nestedContentMetrics:(id)a7;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupContentMargins;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })contentMargins;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 supportsDynamicText:(unsigned long long)a5;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 margins:(id)a4 supportsDynamicText:(unsigned long long)a5;
- (BOOL)isEqualTo:(id)a0 using32BitFloats:(BOOL)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scale:(struct CGSize { double x0; double x1; })a2 textSizeAdjustment:(long long)a3;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a5 contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a6 supportsDynamicText:(unsigned long long)a7;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })layoutInsets;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 widgetGroupMargins:(id)a5 nestedContentMetrics:(id)a6;
- (id)succinctDescription;
- (BOOL)_isUnitScale;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)widgetGroupMargins;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_stringKeyRepresentation;
- (id)_crystalStringKeyRepresentation;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 textSizeAdjustment:(long long)a2;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)a0;
- (id)_luckStringKeyRepresentation;
- (id)succinctDescriptionBuilder;
- (double)_roundToNearestOrUp:(double)a0 withScale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })_rawLayoutInsetAdjustedSizePixelAlignedForDisplayScale:(double)a0;
- (void).cxx_destruct;
- (id)filenameSafeSHAFrom:(id)a0;
- (id)_dawnStringKeyRepresentation;

@end
