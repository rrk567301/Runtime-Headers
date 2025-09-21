@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double directionPadUp;
@property (nonatomic) double directionPadDown;
@property (nonatomic) double directionPadLeft;
@property (nonatomic) double directionPadRight;
@property (nonatomic) double faceButtonA;
@property (nonatomic) double faceButtonB;
@property (nonatomic) double faceButtonX;
@property (nonatomic) double faceButtonY;
@property (nonatomic) double shoulderButtonR1;
@property (nonatomic) double shoulderButtonR2;
@property (nonatomic) double shoulderButtonL1;
@property (nonatomic) double shoulderButtonL2;
@property (nonatomic) double leftJoystickX;
@property (nonatomic) double leftJoystickY;
@property (nonatomic) double leftJoystickButton;
@property (nonatomic) double rightJoystickX;
@property (nonatomic) double rightJoystickY;
@property (nonatomic) double rightJoystickButton;
@property (nonatomic) double menuButton;
@property (nonatomic) double viewButton;
@property (nonatomic) double homeButton;
@property (readonly, nonatomic) char rightJoystickActive;
@property (readonly, nonatomic) char leftJoystickActive;
@property (readonly, nonatomic) char isJoystickPressed;
@property (readonly, nonatomic) char isDirectionPadPressed;
@property (readonly, nonatomic) char isFaceButtonPressed;
@property (readonly, nonatomic) char isShoulderButtonPressed;
@property (readonly, nonatomic) char isKeyboardTypeButtonPressed;
@property (readonly, nonatomic) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityEventRepresentationTabularDescription;

@end
