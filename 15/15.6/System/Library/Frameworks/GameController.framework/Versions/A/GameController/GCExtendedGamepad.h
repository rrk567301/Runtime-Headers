@class GCController, NSString, GCControllerDirectionPad, _GCWebKitUserIntentRecognizer, GCControllerButtonInput;

@interface GCExtendedGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding> {
    long long _buttonHomeUsage;
    long long _buttonMenuUsage;
    long long _buttonOptionsUsage;
    id _gamepadEventObservation;
    _GCWebKitUserIntentRecognizer *_webKitUserIntentRecognizer;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GCControllerButtonInput *button0;
@property (readonly, nonatomic) GCControllerButtonInput *button1;
@property (readonly, nonatomic) GCControllerButtonInput *button2;
@property (readonly, nonatomic) GCControllerButtonInput *button3;
@property (readonly, nonatomic) GCControllerButtonInput *_buttonHome;
@property (readonly, nonatomic) GCControllerButtonInput *_buttonShare;
@property (readonly, nonatomic) char snapshotUsagePresent;
@property (readonly, nonatomic) char recordUsagePresent;
@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonB;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonY;
@property (readonly, nonatomic) GCControllerButtonInput *buttonMenu;
@property (readonly, nonatomic) GCControllerButtonInput *buttonOptions;
@property (readonly, nonatomic) GCControllerButtonInput *buttonHome;
@property (readonly, nonatomic) GCControllerDirectionPad *leftThumbstick;
@property (readonly, nonatomic) GCControllerDirectionPad *rightThumbstick;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder;
@property (readonly, nonatomic) GCControllerButtonInput *leftTrigger;
@property (readonly, nonatomic) GCControllerButtonInput *rightTrigger;
@property (readonly, nonatomic) GCControllerButtonInput *leftThumbstickButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightThumbstickButton;

+ (id)_current;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithInfo:(const struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a0;
- (id)initWithController:(id)a0;
- (id)productCategory;
- (void)setThumbstickUserIntentHandler:(id /* block */)a0;
- (void)applyGlyphFlags;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (char)allowsRotation;
- (void)handleGamepadEvent:(id)a0;
- (void)initAuxiliaryButtonsWithInitInfo:(const struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a0;
- (void)initShareFunctionalityWithInitInfo:(const struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a0;
- (id)initWithController:(id)a0 initInfo:(const struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a1;
- (id)initWithIdentifier:(id)a0 info:(const struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a1;
- (void)populateEncodedInitInfo:(struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a0;
- (char)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(char)a0;
- (id)setElementValuesFromExtendedGamepad:(id)a0;
- (void)setGamepadEventSource:(id)a0;
- (void)setReportsAbsoluteDpadValues:(char)a0;
- (void)setStateFromExtendedGamepad:(id)a0;
- (void)setThumbstickUserIntentHandler:(id /* block */)a0 slidingWindowTotalDuration:(double)a1 slidingWindowSegmentDuration:(double)a2 deadzone:(double)a3 sensitivity:(int)a4;
- (id /* block */)thumbstickUserIntentHandler;

@end
