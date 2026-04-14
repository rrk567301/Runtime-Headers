@class NSString;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } safeAreaInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scale;
@property (readonly, nonatomic) long long textSizeAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_replaceFontStyleIn:(id)a0 withTextSizeAdjustment:(long long)a1;
+ (void)_removeSafeAreaInsetsIn:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)_isUnitScale;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)a0;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3 safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 textSizeAdjustment:(long long)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scale:(struct CGSize { double x0; double x1; })a2 textSizeAdjustment:(long long)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 textSizeAdjustment:(long long)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 fontStyle:(long long)a3;
- (double)_effectiveCornerRadius;
- (double)_roundToNearestOrUp:(double)a0 withScale:(double)a1;
- (id)_stringKeyRepresentation;

@end
