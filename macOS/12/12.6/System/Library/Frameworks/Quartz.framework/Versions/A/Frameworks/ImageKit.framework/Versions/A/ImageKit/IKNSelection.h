@class CAShapeLayer, CALayer, IKNImageViewHandler;

@interface IKNSelection : NSObject {
    CAShapeLayer *_whitelayer;
    CAShapeLayer *_dashedlayer;
    CALayer *_patch;
    CALayer *_patchOverlay;
    CALayer *_orientationOverlay;
    struct CGPath { } *_path;
    struct CGPath { } *_clippedPath;
    struct CGPoint { double x; double y; } _startPosition;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inchRect;
@property (nonatomic) struct CGPoint { double x; double y; } inchPosition;
@property struct CGPoint { double x; double y; } anchor;
@property (nonatomic) double rotationAngle;
@property IKNImageViewHandler *handler;
@property CAShapeLayer *layer;
@property (nonatomic) BOOL selected;
@property BOOL shouldClipToImageRect;
@property (readonly) struct IKHandleInfo { struct CGPoint { double x; double y; } handle[10]; } handleInfo;
@property long long selectionState;
@property (nonatomic) double percentDone;

- (void)dealloc;
- (id)description;
- (void)debugDump;
- (void)cleanup;
- (double)defaultLineWidth;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hide;
- (void)show;
- (long long)layerType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectNonClipped;
- (void)showSelectionWithOrientation:(long long)a0;
- (void)resetSelectionWithOrientation;
- (void)drawOrientationUI:(short)a0;
- (void)forceSelectionInsideView;
- (void)updateGeometry;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(struct CGPoint { double x0; double x1; })a1 anchor:(struct CGPoint { double x0; double x1; })a2 handler:(id)a3;
- (void)installInLayer:(id)a0;
- (void)hilite;
- (void)unhilite;
- (void)prepareShowSelectionWithOrientation:(long long)a0 forceInstallPatch:(BOOL)a1;
- (void)prepareResetSelectionWithOrientation;
- (void)installPatchOverlay;
- (void)exifRotate90:(BOOL)a0;
- (long long)resizePoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 forKnob:(long long)a2;
- (void)prepareDrag;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)applyDrag;
- (void)updatePatchGeometry;
- (struct CGPath { } *)copyTransformedPath:(struct CGPath { } *)a0 fromLayer:(id)a1 toLayer:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a3;
- (void)updateHandleInfo;
- (void)doUpdateGeometry;
- (void)updateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotationAngle:(double)a1 alignTopLeft:(BOOL)a2;
- (void)installMarchingAntAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromUnit:(unsigned long long)a1 toUnit:(unsigned long long)a2;
- (void)removePatchLayer:(id)a0;
- (struct CGImage { } *)copyPatchImage;
- (void)installPatch;
- (void)updatePatchOverlay;
- (id)initWithSelection:(id)a0;
- (void)cancelDrag;
- (void)removePatch;

@end
