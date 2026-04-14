@class VFXClientTextureAsset, NSMutableArray, NSNumber, NSData, PTHumanDetections, VFXNode, VFXAssetNode;
@protocol VFXGraphBinding;

@interface PTVFXRenderEffectBinding : NSObject {
    PTHumanDetections *_humanDetections;
    float _forceFadeOutStart;
    NSNumber *_faceDetectionGroupId;
}

@property (retain, nonatomic) id<VFXGraphBinding> positionBinding;
@property (retain, nonatomic) VFXNode *rootNode;
@property (retain, nonatomic) VFXAssetNode *rootAssetNode;
@property (retain, nonatomic) id<VFXGraphBinding> headPositionBinding;
@property (retain, nonatomic) id<VFXGraphBinding> backgroundDimmingBinding;
@property (retain, nonatomic) VFXClientTextureAsset *alphaTexture;
@property (retain, nonatomic) NSMutableArray *opacityBindings;
@property (retain, nonatomic) NSData *opacityValue;
@property BOOL useBackgroundDimming;
@property float duration;
@property (retain, nonatomic) id<VFXGraphBinding> durationBinding;
@property double creationTimeSeconds;
@property unsigned long long effectType;
@property float emitZValue;
@property struct { void /* unknown type, empty encoding */ columns[4]; } inverseCameraProjection;
@property (readonly) float dimmingFactor;
@property (readonly) BOOL active;
@property BOOL useCircularGradient;

+ (void)setRawValue:(id)a0 onBinding:(id)a1;

- (void).cxx_destruct;
- (void)forceFadeOut:(double)a0;
- (id)initWithHumanDetections:(id)a0;
- (void /* unknown type, empty encoding */)screenSpaceToCameraSpace:(SEL)a0 videoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)singleDetectionGroupId;
- (int)updateBackgroundDimming:(float)a0;
- (int)updateWithEvent:(id)a0 renderRequest:(id)a1 videoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 time:(double)a3;

@end
