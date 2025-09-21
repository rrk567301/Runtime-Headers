@class SKScene, NSMutableDictionary, SKLabelNode;

@interface SKSCNRenderer : NSObject {
    double _timePreviousUpdate;
    void *_skcRenderer;
    NSMutableDictionary *_viewRenderOptions;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    char _hasRenderedOnce;
    char _hasRenderedForCurrentUpdate;
    char _isInTransition;
    char _disableInput;
    float _prevBackingScaleFactor;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) char showsFPS;
@property (nonatomic) char showsDrawCount;
@property (nonatomic) char showsNodeCount;
@property (nonatomic) char showsPhysics;
@property (nonatomic) char showsFields;
@property (nonatomic) char ignoresSiblingOrder;

+ (id)rendererWithContext:(id)a0 options:(id)a1;
+ (id)rendererWithDevice:(id)a0 options:(id)a1;
+ (void)setPrefersOpenGL:(char)a0;
+ (int)getOpenGLFramebuffer:(id)a0;
+ (void)restoreDefaultOpenGLState:(id)a0 frameBuffer:(int)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void)render:(char)a0;
- (void)_update:(double)a0;
- (void)setupContext;
- (id)_scene;
- (void)_initialize;
- (void)renderToFramebuffer:(int)a0 shouldClear:(char)a1;
- (void)renderToTexture:(id)a0 commandQueue:(id)a1;
- (void)renderTransition:(id)a0 withInputTexture:(unsigned int)a1 outputTexture:(unsigned int)a2 inputTextureSize:(struct CGSize { double x0; double x1; })a3 outputTextureSize:(struct CGSize { double x0; double x1; })a4 time:(float)a5;
- (void)renderTransition:(id)a0 withInputTexture:(id)a1 outputTexture:(id)a2 time:(float)a3 encoder:(id)a4 pass:(id)a5 commandQueue:(id)a6;
- (void)renderWithEncoder:(id)a0 pass:(id)a1 commandQueue:(id)a2;
- (void)settingsForTransition:(id)a0 atTime:(double)a1 renderIncomingToTexture:(char *)a2 renderOutgoingToTexture:(char *)a3 renderIncomingToScreen:(char *)a4 renderOutgoingToScreen:(char *)a5;
- (void)updateAtTime:(double)a0;
- (double)_fps;
- (void /* unknown type, empty encoding */)_getDestBounds;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_getMatrix;
- (id)_getOptions;
- (void /* unknown type, empty encoding */)_getViewport;
- (char)_shouldCenterStats;
- (void)_showAllStats;
- (char)_showsCPUStats;
- (char)_showsCoreAnimationFPS;
- (char)_showsCulledNodesInNodeCount;
- (char)_showsGPUStats;
- (char)_showsOutlineInterior;
- (char)_showsSpriteBounds;
- (char)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (id)initWithSKCRenderer:(void *)a0;
- (void)renderTransition:(id)a0 toFramebuffer:(int)a1 withInputTexture:(unsigned int)a2 outputTexture:(unsigned int)a3 inputTextureSize:(struct CGSize { double x0; double x1; })a4 outputTextureSize:(struct CGSize { double x0; double x1; })a5 time:(float)a6;
- (void)setShowsQuadCount:(char)a0;
- (void)setShowsSpriteBounds:(char)a0;
- (void)set_shouldCenterStats:(char)a0;
- (void)set_showsCPUStats:(char)a0;
- (void)set_showsCoreAnimationFPS:(char)a0;
- (void)set_showsCulledNodesInNodeCount:(char)a0;
- (void)set_showsGPUStats:(char)a0;
- (void)set_showsOutlineInterior:(char)a0;
- (void)set_showsSpriteBounds:(char)a0;
- (void)set_showsTotalAreaRendered:(char)a0;
- (char)showsQuadCount;
- (char)showsSpriteBounds;

@end
