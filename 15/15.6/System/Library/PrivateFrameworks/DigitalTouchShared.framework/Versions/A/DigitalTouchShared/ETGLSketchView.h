@class ETQuadCurvePointFIFO, NSColor, ETPointFIFO, NSOpenGLContext, ETGLSketchRenderer, ETSketchMessage, ETBoxcarFilterPointFIFO;

@interface ETGLSketchView : NSView <ETGLSketchRendererDelegate> {
    NSColor *_currentStrokeColor;
    double _lastDisplayLinkTime;
    char _renderingOffscreen;
    unsigned long long _currentStrokeIndex;
    unsigned long long _currentPointIndex;
    unsigned long long _numberOfDrawnStrokes;
    double _renderingDelay;
    double _renderingStartTime;
    double _pauseTime;
}

@property (retain, nonatomic) NSOpenGLContext *context;
@property (retain, nonatomic) ETGLSketchRenderer *renderer;
@property (retain, nonatomic) ETQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *pointFIFO;
@property (retain, nonatomic) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *secondaryPointFIFO;
@property (nonatomic) float unitSize;
@property (nonatomic) struct vector<std::vector<float __attribute__((ext_vector_type(2)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float __attribute__((ext_vector_type(2)))> *, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void *__value_; } __end_cap_; } vertexBatches;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } controlBatches;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } vertexBatchCount;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } secondaryVertexBatchCount;
@property (nonatomic) unsigned long long vertexOffset;
@property (nonatomic) double delayBetweenStrokes;
@property (retain, nonatomic) ETSketchMessage *messageData;
@property (nonatomic, getter=isPlaying) char playing;
@property (nonatomic, getter=isPaused) char paused;
@property (nonatomic) double wispDelay;
@property (nonatomic) double timestampForLastDrawnPoint;
@property (nonatomic) char playbackCompleted;
@property (nonatomic) char useFastVerticalWisp;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (char)_doesPoint:(struct { struct { unsigned short x0; unsigned short x1; } x0; struct { unsigned short x0; } x1; } *)a0 predateTime:(double)a1;
- (void)_drawCurrentPointAdvancingPlayback;
- (void)_endPlayback;
- (char)_getCurrentSketchPoint:(struct { struct { unsigned short x0; unsigned short x1; } x0; struct { unsigned short x0; } x1; } *)a0;
- (void)beginStrokeWithColor:(id)a0;
- (void)clearAllPoints;
- (struct CGImage { } *)createImageForTime:(double)a0;
- (struct CGImage { } *)createRenderedFrameImage;
- (void)didCompleteStroke;
- (void)drawFrameBeforeWisp;
- (void)handleSketchAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)handleTapAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)sampleIntoDestination:(struct CGImageDestination { } *)a0 frameProperties:(struct __CFDictionary { } *)a1 usingAlpha:(char)a2;
- (void)setGLContextAsCurrent;
- (void)sketchRendererDidReachVertexLimit:(id)a0;
- (void)updateRendererWithPoints:(void *)a0 count:(unsigned long long)a1 controlPoint:(void *)a2 flush:(char)a3;
- (void)updateRendererWithSecondaryPoints:(void *)a0 count:(unsigned long long)a1 controlPoint:(void *)a2 flush:(char)a3;
- (void)updateScaleFactorForSize:(struct CGSize { double x0; double x1; })a0;

@end
