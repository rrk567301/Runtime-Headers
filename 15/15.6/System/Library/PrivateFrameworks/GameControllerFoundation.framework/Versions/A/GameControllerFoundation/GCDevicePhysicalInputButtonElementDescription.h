@class NSArray;

@interface GCDevicePhysicalInputButtonElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
@property (nonatomic, getter=isAnalog) char analog;
@property (nonatomic) float pressedThreshold;
@property (nonatomic) unsigned long long eventPressedValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
