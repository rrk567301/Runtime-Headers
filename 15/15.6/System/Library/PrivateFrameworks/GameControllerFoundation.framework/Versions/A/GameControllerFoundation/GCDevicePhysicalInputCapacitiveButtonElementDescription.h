@interface GCDevicePhysicalInputCapacitiveButtonElementDescription : GCDevicePhysicalInputButtonElementDescription <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) float touchedThreshold;
@property (nonatomic) unsigned long long eventTouchedValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
