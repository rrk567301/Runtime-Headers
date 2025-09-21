@class GCControllerDirectionPad, GCControllerButtonInput, GCDualSenseAdaptiveTrigger;

@interface GCDualSenseGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary;
@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *leftTrigger;
@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *rightTrigger;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithController:(id)a0;
- (void)_activateExtendedSupport;
- (void)initializeExtraControllerElements;
- (void)populateEncodedInitInfo:(struct { struct { id x0; char x1; char x2; union { struct { int x0; char x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; char x5; char x6; char x7; id x8; id x9; id x10; } x0[22]; BOOL x1; BOOL x2; } *)a0;

@end
