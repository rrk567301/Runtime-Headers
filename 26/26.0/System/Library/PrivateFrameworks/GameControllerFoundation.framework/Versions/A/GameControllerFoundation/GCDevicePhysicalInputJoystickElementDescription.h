@class NSArray;

@interface GCDevicePhysicalInputJoystickElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsPress;
@property (nonatomic) BOOL supportsTouch;
@property (copy, nonatomic) NSArray *xySources;
@property (copy, nonatomic) NSArray *xSources;
@property (copy, nonatomic) NSArray *ySources;
@property (copy, nonatomic) NSArray *upSources;
@property (copy, nonatomic) NSArray *leftSources;
@property (copy, nonatomic) NSArray *downSources;
@property (copy, nonatomic) NSArray *rightSources;
@property (copy, nonatomic) NSArray *pressSources;
@property (copy, nonatomic) NSArray *touchSources;
@property (nonatomic) BOOL analogAxes;
@property (nonatomic) BOOL analogPress;
@property (nonatomic) float directionPressedThreshold;
@property (nonatomic) float pressedThreshold;
@property (nonatomic) float touchedThreshold;
@property (nonatomic) unsigned long long eventXValueField;
@property (nonatomic) unsigned long long eventYValueField;
@property (nonatomic) unsigned long long eventPressValueField;
@property (nonatomic) unsigned long long eventTouchValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
