@class CAOpenGLLayer, NSOpenGLContext;
@protocol ETGLSketchRendererDelegate;

@interface ETGLSketchRenderer : NSObject {
    char _useThisRendererOnlyForWarmup;
}

@property (nonatomic) struct { } *allVertices;
@property (nonatomic) int vertexBufferCount;
@property (nonatomic) int vertexBufferBegin;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) float deathTime;
@property (nonatomic) float lastBirth;
@property (nonatomic) void /* unknown type, empty encoding */ brushColorForInitialColor;
@property (nonatomic) void /* unknown type, empty encoding */ brushColorForFinalColor;
@property (nonatomic) unsigned int shaderProgram;
@property (nonatomic) unsigned int vboVertLineId;
@property (nonatomic) unsigned int vaoLineID;
@property (nonatomic) unsigned int viewRenderbuffer;
@property (nonatomic) unsigned int viewFramebuffer;
@property (nonatomic) unsigned int backingWidth;
@property (nonatomic) unsigned int backingHeight;
@property (nonatomic) double cometScaleFactor;
@property (nonatomic) unsigned int allocatedWidth;
@property (nonatomic) unsigned int allocatedHeight;
@property (nonatomic) NSOpenGLContext *context;
@property (nonatomic) CAOpenGLLayer *cachedLayer;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) float currentTimeClock;
@property (readonly, nonatomic) float currentTimeIndex;
@property (nonatomic) char isDying;
@property (nonatomic) double wispDelay;
@property (weak, nonatomic) id<ETGLSketchRendererDelegate> delegate;
@property (nonatomic) char renderingOffscreen;
@property (nonatomic) double lineWidthScaleFactor;
@property (nonatomic) char useFastVerticalWisp;

+ (void)warmupShaders;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;
- (void)render;
- (void)erase;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (int)linkProgramWithVShader:(int)a0 FShader:(int)a1;
- (void)_warmupShaders;
- (void)appendDualPointArray:(id)a0 length:(SEL)a1 controlPoint:(void *)a2 alternatePoints:(unsigned long long)a3 alternateLength:(void *)a4 alternateControlPoint:(unsigned long long)a5 unitSize:(float)a6 segmentIndex:(unsigned long long)a7 segmentCount:(unsigned long long)a8;
- (void)appendPointArray:(void *)a0 length:(unsigned long long)a1;
- (struct CGImage { } *)createRenderedFrameImageUsingAlpha:(char)a0;
- (int)loadOneShaderOfType:(unsigned int)a0 withCString:(const char *)a1 length:(int)a2;
- (char)resizeFromCachedLayer;
- (char)resizeFromLayer:(id)a0;
- (void)setFinalDrawingColor:(void *)a0;
- (void)setInitialDrawingColor:(void *)a0;
- (void)setupFBOs;
- (void)setupShaders;
- (void)setupTexture;
- (void)setupVAOs;
- (void)updateGLWithCurrentTime;
- (void)updateGLWithTime:(float)a0;
- (void)updateVertexBufferWithVertexCount:(unsigned long long)a0;

@end
