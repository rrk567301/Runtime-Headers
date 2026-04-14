@class NSBezierPath, AXVView, AXVTextField, CAShapeLayer, NSString;

@interface AXVRotorWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setRotorTitleTextField:) AXVTextField *_rotorTitleTextField;
@property (retain, nonatomic, setter=_setRotorRadialView:) AXVView *_rotorRadialView;
@property (nonatomic, setter=_setSelectedRotorKnobIndex:) long long _selectedRotorKnobIndex;
@property (retain, nonatomic, setter=_setRotorKnobsLayer:) CAShapeLayer *_rotorKnobsLayer;
@property (retain, nonatomic, setter=_setRotorKnobsPath:) NSBezierPath *_rotorKnobsPath;
@property (retain, nonatomic, setter=_setSelectedRotorKnobLayer:) CAShapeLayer *_selectedRotorKnobLayer;
@property (retain, nonatomic, setter=_setRotorPointerLayer:) CAShapeLayer *_rotorPointerLayer;
@property (copy, nonatomic, setter=_setRotorTitle:) NSString *_rotorTitle;
@property (nonatomic, setter=_setRotorKnobCount:) long long _rotorKnobCount;
@property (nonatomic) double baseFontSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupStackView;
- (id)_setupTitleTextField;
- (void)_adjustWindowFrameToFitContent;
- (void)updateWithRotorInfo:(id)a0;
- (void)_updateRotorTitle:(id)a0;
- (void)_updateRotorKnobCount:(long long)a0;
- (void)selectRotorKnobAtIndex:(long long)a0;
- (id)_setupRotorRadialView;
- (void)_setupKnobsLayer;
- (void)_setupSelectedKnobLayer;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_radialRotorBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobLayerBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobBounds;
- (void)_drawRadialRotor;
- (double)_radiansToRotateForIndex:(long long)a0;
- (id)_createKnobLayerForIndex:(long long)a0;
- (void)_drawKnobs;
- (void)_drawSelectedKnob;
- (void)_drawCenteredPointer;
- (void)_drawCenteredCircle;

@end
