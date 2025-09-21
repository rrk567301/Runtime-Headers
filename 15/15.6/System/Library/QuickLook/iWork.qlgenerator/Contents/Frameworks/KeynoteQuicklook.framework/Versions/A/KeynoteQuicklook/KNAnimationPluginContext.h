@class TSDRep, KNAnimatedBuild, NSArray, TSDAnimationSet, TSDMetalTextureRenderer, TSDMetalContext, NSDictionary, NSString, KNAnimationRandomGenerator;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>

@property (retain, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property (retain, nonatomic) TSDAnimationSet *animationSet;
@property (retain, nonatomic) NSArray *scaledTextures;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic) double percent;
@property (nonatomic) char isMotionBlurred;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRectOnCanvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (weak, nonatomic) KNAnimatedBuild *animatedBuild;
@property (weak, nonatomic) NSDictionary *buildAttributes;
@property (weak, nonatomic) NSDictionary *transitionAttributes;
@property (weak, nonatomic) NSArray *magicMoveMatches;
@property (nonatomic) char isPreview;
@property (nonatomic) char isMovieExport;
@property (retain, nonatomic) TSDMetalContext *metalContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawableFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationFrame;
@property (nonatomic) char isWarmingUp;
@property (weak, nonatomic) TSDRep *rep;
@property (nonatomic) long long rendererType;
@property (nonatomic) char isSceneRenderingEnabled;
@property (readonly, nonatomic) char isBuild;
@property (readonly, nonatomic) char isTransition;
@property (readonly, nonatomic) char isMagicMove;
@property (readonly, nonatomic) char isFrameRenderer;
@property (readonly, nonatomic) char isMetalRenderer;
@property (readonly, nonatomic) char willRenderWithLiveTextureSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
