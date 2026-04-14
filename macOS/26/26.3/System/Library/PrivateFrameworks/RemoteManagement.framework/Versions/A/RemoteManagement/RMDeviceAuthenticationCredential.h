@interface RMDeviceAuthenticationCredential : RMAuthenticationCredential

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
