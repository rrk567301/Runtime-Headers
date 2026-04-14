@class NSString, PKSharingCarKeyInvitation;

@interface PKExistingCardAuthorizationResponseCarKeyGroup : PKExistingCardAuthorizationResponseGroup

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) PKSharingCarKeyInvitation *invitation;

+ (BOOL)supportsSecureCoding;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 sessionIdentifier:(id)a2 invitation:(id)a3;
- (BOOL)isEqualToCarKeyGroup:(id)a0;

@end
