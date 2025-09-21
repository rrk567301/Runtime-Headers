@class NSArray, FigCaptureSemanticStyle;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) char depthDataDeliveryEnabled;
@property (nonatomic) char filterRenderingEnabled;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) char semanticStyleRenderingEnabled;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic) char primaryCaptureRectModificationEnabled;
@property (nonatomic) double primaryCaptureRectAspectRatio;
@property (nonatomic) struct CGPoint { double x; double y; } primaryCaptureRectCenter;
@property (nonatomic) long long primaryCaptureRectUniqueID;
@property (nonatomic) char zoomPIPOverlayEnabled;
@property (nonatomic) char portraitAutoSuggestEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
