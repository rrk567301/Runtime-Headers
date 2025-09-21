@interface RMDeviceAuthenticationCredential : RMAuthenticationCredential

+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
