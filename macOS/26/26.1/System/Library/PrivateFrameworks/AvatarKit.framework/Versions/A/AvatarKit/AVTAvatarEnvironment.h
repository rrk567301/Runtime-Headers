@class NSString, VFXWorld, AVTAvatar, VFXMaterial, VFXNode;
@protocol VFXWorldRenderer;

@interface AVTAvatarEnvironment : NSObject {
    VFXWorld *_scene;
    id<VFXWorldRenderer> _renderer;
    AVTAvatar *_avatar;
    VFXMaterial *_shadowPlaneMaterial;
    VFXNode *_whitePlane;
    VFXNode *_environmentNode;
    VFXNode *_defaultPointOfView;
    NSString *_framingMode;
    VFXNode *_animojiCamera;
    VFXNode *_memojiCameraGroup;
    VFXNode *_customCamera;
    VFXNode *_specializedLightingNode;
    VFXNode *_defaultLightingNode;
}

@property (copy, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) VFXNode *environmentNode;
@property (readonly, nonatomic) VFXNode *currentPointOfView;
@property (readonly, nonatomic) VFXNode *defaultPointOfView;
@property (nonatomic) float fadeFactor;
@property (readonly, nonatomic) BOOL faceIsFullyVisible;

- (void)willSnapshot;
- (void)didSnapshot;
- (void).cxx_destruct;
- (id)initAndInstallInScene:(id)a0 renderer:(id)a1;
- (void)avatarDidChange:(id)a0 presentationConfiguration:(id)a1;
- (id)defaultEnvironmentNode;
- (id)pointOfViewForFramingMode:(id)a0;
- (void)setEnablePhysicsSimulation:(BOOL)a0;
- (void)setFramingMode:(id)a0 animationDuration:(double)a1;
- (void)setFramingModeForcingPointOfViewUpdate:(id)a0;
- (void)updateCustomCameras;
- (void)updatePointOfViewFromFramingMode;
- (void)updateSpecializedLighting;
- (void)updateWithPresentationConfiguration:(id)a0;

@end
