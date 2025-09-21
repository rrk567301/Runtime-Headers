@class NSString, NSArray, NSTimer, SSFrameBuffer, SSScreenInfo, CALayer, NSColor;

@interface SSFrameBufferRenderView : NSView <CALayerDelegate>

@property (readonly) SSScreenInfo *screen;
@property unsigned long long screenIdentifier;
@property (retain) SSFrameBuffer *frameBuffer;
@property unsigned int currentViewRotation;
@property char showFeedbackLayer;
@property (retain) NSColor *cursorColor;
@property (retain) CALayer *feedbackLayer;
@property (retain) NSTimer *feedbackLayerTimer;
@property char feedbackLayerNeedsTimedDisplay;
@property (retain) NSArray *touchEventArray;
@property (nonatomic) char feedbackLayerNeedsCartesianCoordinates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)rightMouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)setTouchEvents:(id)a0;
- (void)feedbackLayerThrottle;
- (int)orientationForCurrentAngle;
- (struct CGPoint { double x0; double x1; })translateInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 xPercent:(double)a1 yPercent:(double)a2 enclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
