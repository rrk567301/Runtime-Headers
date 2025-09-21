@class NSString, NSDictionary;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential

@property (readonly, copy, nonatomic) NSString *authenticationScheme;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthenticationScheme:(id)a0 properties:(id)a1;
- (char)isEqualToAuthenticationCredential:(id)a0;

@end
