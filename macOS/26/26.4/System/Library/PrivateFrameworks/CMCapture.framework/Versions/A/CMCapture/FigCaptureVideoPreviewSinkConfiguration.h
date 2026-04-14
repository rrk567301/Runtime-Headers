@class NSArray, FigCaptureSemanticStyle;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL filterRenderingEnabled;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic) BOOL primaryCaptureRectModificationEnabled;
@property (nonatomic) double primaryCaptureRectAspectRatio;
@property (nonatomic) struct CGPoint { double x; double y; } primaryCaptureRectCenter;
@property (nonatomic) long long primaryCaptureRectUniqueID;
@property (nonatomic) BOOL zoomPIPOverlayEnabled;
@property (nonatomic) BOOL portraitAutoSuggestEnabled;

- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;

@end
