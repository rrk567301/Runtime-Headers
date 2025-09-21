@class NSColor, NSMutableArray, NSString;
@protocol DKInkRendererDelegate;

@interface DKInkRendererCG : NSView <DKInkRenderer>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } invalidRect;
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes;
@property (retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke;
@property (retain, nonatomic) NSColor *inkColor;
@property (weak, nonatomic) id<DKInkRendererDelegate> delegate;
@property (nonatomic) char scaleDrawingToFitCanvas;
@property (nonatomic) double drawingScale;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) char drawingEnabled;
@property (readonly, nonatomic) char supportsBleedAnimation;
@property (readonly, nonatomic) char initialized;
@property (readonly, nonatomic) unsigned long long maximumPointsForBleedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)teardown;
- (void)display;
- (void)_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flush;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; })a0;
- (void)force;
- (void)_updateAppearance;
- (void)endStroke;
- (id)snapshotImage;
- (void)beginStroke;
- (void)completeAnimationsImmediately;
- (void)removeLastStroke;
- (void)resetRendererState;

@end
