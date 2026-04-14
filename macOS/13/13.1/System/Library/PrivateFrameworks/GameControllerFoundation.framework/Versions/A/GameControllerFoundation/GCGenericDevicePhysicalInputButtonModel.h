@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) long long sourceExtendedEventFieldIndex;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
