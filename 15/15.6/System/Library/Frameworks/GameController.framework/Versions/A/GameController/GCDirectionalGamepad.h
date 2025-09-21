@class NSString, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCDirectionalGamepad : GCMicroGamepad <DirectionPadValueChangedDelegate, DigitizerValueChangedDelegate, CoalescableMicroGamepad> {
    char _reportsAbsoluteDpadValues;
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    unsigned char _directionPadButtonsState;
    char _centerButtonPressed;
    long long _touchState;
    char _leftBufferZone;
    char _beganTouchOutsideBounds;
    float _previousButtonState;
    struct CGPoint { double x; double y; } _absoluteWindowLocation;
    struct CGPoint { double x; double y; } _absolutePosition;
    struct CGPoint { double x; double y; } _absoluteTouchDownPosition;
    struct CGPoint { double x; double y; } _relativePosition;
    GCControllerDirectionPad *_cardinalDpad;
    GCControllerButtonInput *_centerButton;
    char _treatOnlyCenterRingAsButtonA;
    unsigned long long _owner;
    long long _deviceType;
}

@property (nonatomic) unsigned long long owner;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)productCategory;
- (struct CGPoint { double x0; double x1; })addCGPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (char)allowsRotation;
- (char)calculateRelativePositionWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(char)a2;
- (id)centerButtonEvent:(id)a0 pressed:(char)a1;
- (struct CGPoint { double x0; double x1; })clampPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (char)determineTouchStateWithDigitizerX:(float)a0 digitizerY:(float)a1 touchDown:(char)a2;
- (void)digitizerTouchEvent:(id)a0 x:(double)a1 y:(double)a2 timestamp:(unsigned long long)a3 forceSkipDpadRotation:(char)a4;
- (void)digitizerTouchUp:(id)a0 timestamp:(unsigned long long)a1 forceSkipDpadRotation:(char)a2;
- (double)distanceBetweenCGPoint:(struct CGPoint { double x0; double x1; })a0 andCGPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)dpadDirectionEvent:(id)a0 direction:(unsigned long long)a1 pressed:(char)a2;
- (double)magnitudeForCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })mulCGPoint:(struct CGPoint { double x0; double x1; })a0 byScalar:(double)a1;
- (struct CGPoint { double x0; double x1; })normalizeCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)ownershipClaimingElementsZero;
- (void)reportDigitizerChange:(id)a0;
- (void)reportDirectionpadChange:(id)a0 onQueue:(id)a1;
- (char)reportsAbsoluteDpadValues;
- (struct CGPoint { double x0; double x1; })scaleCGPoint:(struct CGPoint { double x0; double x1; })a0 toLength:(double)a1;
- (void)setAllowsRotation:(char)a0;
- (void)setDpad:(id)a0 digitizerX:(double)a1 digitizerY:(double)a2 touchDown:(char)a3;
- (void)setReportsAbsoluteDpadValues:(char)a0;
- (struct CGPoint { double x0; double x1; })subCGPoint:(struct CGPoint { double x0; double x1; })a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;

@end
