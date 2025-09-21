@class NSString;

@interface STKStickerEffect : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ comicParameters;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewForRendering;
}

@property (class, nonatomic, readonly) STKStickerEffect *noneEffect;
@property (class, nonatomic, readonly) STKStickerEffect *strokeEffect;
@property (class, nonatomic, readonly) STKStickerEffect *comicEffect;
@property (class, nonatomic, readonly) STKStickerEffect *puffyEffect;
@property (class, nonatomic, readonly) STKStickerEffect *iridescentEffect;
@property (class, nonatomic, readonly) STKStickerEffect *liveEffect;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) BOOL isStroked;
@property (nonatomic) float strokeRadius;
@property (nonatomic) float strokeBlurRadius;
@property (nonatomic) float smallStrokeRadiusMultiplier;
@property (nonatomic) BOOL forceSmallStrokeRadiusMultiplier;
@property (nonatomic) BOOL isPuffy;
@property (nonatomic) float normalsRadius;
@property (nonatomic) int iridescence;
@property (nonatomic) BOOL applyIridescenceBeforeStroke;
@property (nonatomic) BOOL isBrushed;
@property (nonatomic) BOOL applyBrushBeforeStroke;
@property (nonatomic) float shadowRadius;
@property (nonatomic) float shadowAlpha;
@property (nonatomic) void /* unknown type, empty encoding */ shadowOffset;
@property (nonatomic) void /* unknown type, empty encoding */ shadowParallax;
@property (nonatomic) float smallShadowSizeMultiplier;
@property (nonatomic) float smallShadowAlphaMultiplier;
@property (nonatomic) BOOL isComicEnabled;
@property (nonatomic, readonly) BOOL requiresDeviceMotion;
@property (nonatomic) BOOL isCurlEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)applyComicInkParameters;
- (void)applyComicParameters;
- (void)applyTo:(id)a0 completionHandler:(id /* block */)a1;

@end
