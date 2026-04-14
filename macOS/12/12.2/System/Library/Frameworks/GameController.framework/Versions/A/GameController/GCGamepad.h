@class GCController, NSString, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding> {
    id _gamepadEventObservation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCControllerButtonInput *buttonMenu;
@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonB;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonY;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)productCategory;
- (BOOL)reportsAbsoluteDpadValues;
- (BOOL)allowsRotation;
- (void)setAllowsRotation:(BOOL)a0;
- (void)setGamepadEventSource:(id)a0;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)saveSnapshot;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;

@end
