@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) double pressedThreshold;
@property (readonly) double touchedThreshold;
@property (readonly) long long sourcePressedValueExtendedEventFieldIndex;
@property (readonly) long long sourceTouchedValueExtendedEventFieldIndex;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
