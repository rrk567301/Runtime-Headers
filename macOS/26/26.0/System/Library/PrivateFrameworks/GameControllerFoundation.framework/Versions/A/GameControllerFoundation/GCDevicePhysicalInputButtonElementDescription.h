@class NSArray;

@interface GCDevicePhysicalInputButtonElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsTouch;
@property (nonatomic) BOOL supportsForce;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSArray *touchSources;
@property (nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic) float pressedThreshold;
@property (nonatomic) float touchedThreshold;
@property (nonatomic) unsigned long long eventPressedValueField;
@property (nonatomic) unsigned long long eventAnalogPressValueField;
@property (nonatomic) unsigned long long eventTouchValueField;
@property (nonatomic) unsigned long long eventForceValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
