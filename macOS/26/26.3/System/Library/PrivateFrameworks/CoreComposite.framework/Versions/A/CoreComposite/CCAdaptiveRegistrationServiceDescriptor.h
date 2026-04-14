@interface CCAdaptiveRegistrationServiceDescriptor : CCServiceDescriptor

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (BOOL)isSupported;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
