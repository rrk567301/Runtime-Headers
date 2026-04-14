@class IFColor, NSUUID;

@interface ISCompositingDescriptor : NSObject <NSCopying>

@property struct CGSize { double width; double height; } size;
@property double scale;
@property unsigned long long platformStyle;
@property (copy) IFColor *tintColor;
@property long long appearance;
@property long long appearanceVariant;
@property unsigned long long background;
@property unsigned long long platform;
@property BOOL useLegacyCompatibilityMode;
@property BOOL shouldApplyMask;
@property unsigned long long languageDirection;
@property (nonatomic) unsigned long long shape;
@property (nonatomic) double relativeInset;
@property (readonly) long long assetAppearance;
@property unsigned long long assetPlatformHint;
@property (readonly) unsigned long long assetPlatform;
@property BOOL cacheFinalizedIconOnGeneratedImage;
@property (readonly) NSUUID *digest;

+ (long long)assetAppearanceForAppearance:(long long)a0 appearanceVariant:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)digest:(void *)a0 size:(unsigned long long)a1;
- (id)encapsulationShape;
- (unsigned long long)ICRAppearance;
- (long long)CUINamedImageDeviceClass;
- (id)ICRRenderingMode;
- (id)initWithImageDescriptor:(id)a0;
- (double)resolvedRelativeInsetForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)updateWithImageDescriptor:(id)a0;

@end
