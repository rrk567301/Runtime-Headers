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

+ (void)_removeSafeAreaInsetsIn:(id)a0;
+ (id)sha256DataFromData:(id)a0;
+ (void)_replaceFontStyleIn:(id)a0 withTextSizeAdjustment:(long long)a1;

- (long long)compare:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)a0;
- (struct CGSize { double x0; double x1; })scale;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (double)_effectiveCornerRadius;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 margins:(id)a4 supportsDynamicText:(unsigned long long)a5;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 textSizeAdjustment:(long long)a2;
- (BOOL)_isUnitScale;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3;
- (double)_roundToNearestOrUp:(double)a0 withScale:(double)a1;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupSafeAreaInsets;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)succinctDescriptionBuilder;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 textSizeAdjustment:(long long)a3;
- (id)_stringKeyRepresentation;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupContentMargins;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (unsigned long long)hashUsing32BitFloats:(BOOL)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 widgetGroupMargins:(id)a5 nestedContentMetrics:(id)a6;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupLayoutInsets;
- (id)_dawnStringKeyRepresentation;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 margins:(id)a4 supportsDynamicText:(unsigned long long)a5 widgetGroupMargins:(id)a6 nestedContentMetrics:(id)a7;
- (id)widgetGroupMargins;
- (long long)textSizeAdjustment;
- (struct CGSize { double x0; double x1; })_rawLayoutInsetAdjustedSizePixelAlignedForDisplayScale:(double)a0;
- (id)succinctDescription;
- (id)filenameSafeSHAFrom:(id)a0;
- (id)_luckStringKeyRepresentation;
- (id)_stringKeyRepresentationForVersion:(unsigned long long)a0;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })contentMargins;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a5 contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a6 supportsDynamicText:(unsigned long long)a7;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scale:(struct CGSize { double x0; double x1; })a2 textSizeAdjustment:(long long)a3;
- (id)_crystalStringKeyRepresentation;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4 supportsDynamicText:(unsigned long long)a5;
- (BOOL)isEqualTo:(id)a0 using32BitFloats:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })layoutInsets;
- (BOOL)_hasZeroLayoutInsets;

@end
