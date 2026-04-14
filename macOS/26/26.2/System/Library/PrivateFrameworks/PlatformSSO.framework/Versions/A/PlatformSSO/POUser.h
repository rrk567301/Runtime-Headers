@class NSString;

@interface POUser : _POJWTBodyBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *loginUserName;
@property (readonly) NSString *generatedUUID;
@property (readonly) NSString *uniqueIdpIdentifier;
@property (readonly) NSString *uid;
@property (readonly) NSString *altSecurityIdentity;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)uid;
- (id)copy;
- (id)mutableCopy;
- (id)loginUserName;
- (id)altSecurityIdentity;
- (id)generatedUUID;
- (id)uniqueIdpIdentifier;

@end
