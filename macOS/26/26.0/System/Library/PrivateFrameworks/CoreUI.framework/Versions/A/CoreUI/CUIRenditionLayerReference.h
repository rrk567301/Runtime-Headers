@class CUIRenditionKey, NSString;

@interface CUIRenditionLayerReference : NSObject

@property (retain, nonatomic) CUIRenditionKey *referenceKey;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *layerName;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (nonatomic) float blurStrength;
@property (copy, nonatomic) NSString *gradientOrColorName;
@property (copy, nonatomic) NSString *colorName;
@property (nonatomic) BOOL hasLightingEffects;
@property (nonatomic) BOOL gathersSpecularByElement;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) BOOL hasSpecular;
@property (nonatomic) double translucency;

- (void)dealloc;
- (id)init;
- (id)description;

@end
