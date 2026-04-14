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
@property (nonatomic) double forceMinExtent;
@property (nonatomic) double forceMaxExtent;
@property (nonatomic) unsigned long long eventPressedValueField;
@property (nonatomic) unsigned long long eventAnalogPressValueField;
@property (nonatomic) unsigned long long eventTouchValueField;
@property (nonatomic) unsigned long long eventForceValueField;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
