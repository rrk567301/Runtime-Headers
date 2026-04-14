@class SCNRenderer, AVAudioEngine, MTLRenderPassDescriptor, MTLRenderPassColorAttachmentDescriptor, MTLRenderPassDepthAttachmentDescriptor, SCNNode, MTKView, AVAudioEnvironmentNode, NSString, SCNTechnique, NSArray, SKScene, SCNScene, NSColor;
@protocol MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, MTLTexture, MTLCommandQueue;

@interface SCNCompositorRenderer : NSObject <MTKViewDelegate, SCNSceneRenderer, SCNTechniqueSupport> {
    MTKView *_mtkView;
    unsigned long long _layout;
    SCNRenderer *_renderer;
    unsigned long long _attachmentCount;
    struct { unsigned long long drawableIndex; MTLRenderPassColorAttachmentDescriptor *colorAttachment; MTLRenderPassDepthAttachmentDescriptor *depthAttachment; } _attachments[2];
    NSArray *_viewPoints;
    unsigned long long _sampleCount;
    id<MTLTexture> _msaaColorTextures[3][2];
    id<MTLTexture> _msaaDepthTextures[3][2];
    id<MTLTexture> _colorTextures[3][2];
    id<MTLTexture> _depthTextures[3][2];
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _viewMatrix0;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _viewMatrix1;
}

@property (nonatomic) unsigned long long antialiasingMode;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL usesReverseZ;
@property (copy, nonatomic) SCNTechnique *technique;

+ (unsigned char)frameBufferFeatures;
+ (Class)rendererClass;

- (void)dealloc;
- (id)init;
- (id)renderer;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)_sceneWillEnterForeground:(id)a0;
- (void)_sceneDidEnterBackground:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (const void *)__CFObject;
- (id)_resourceManagerMonitor;
- (id)_commandBufferStatusMonitor;
- (void)presentScene:(id)a0 withTransition:(id)a1 incomingPointOfView:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1;
- (id)nodesInsideFrustumWithPointOfView:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })projectPoint:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct SCNVector3 { double x0; double x1; double x2; })unprojectPoint:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (BOOL)prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (void)prepareObjects:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_wantsSceneRendererDelegationMessages;
- (void)set_wantsSceneRendererDelegationMessages:(BOOL)a0;
- (void)set_resourceManagerMonitor:(id)a0;
- (void)set_commandBufferStatusMonitor:(id)a0;
- (id)initWithMTKView:(id)a0 options:(id)a1;
- (void)_discardTextures;
- (void)_rebuildTextures;
- (void)_initRendererWithOptions:(id)a0;
- (void)_sceneDidBecomeActive:(id)a0;
- (void)_sceneWillResignActive:(id)a0;
- (void)setViewMatrix0:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setViewMatrix1:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;

@end
