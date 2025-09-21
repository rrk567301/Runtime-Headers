@class NSString;

@interface SFPasskeyCredentialIdentity : SFCredentialIdentity

@property (readonly, copy, nonatomic) NSString *credentialID;
@property (readonly, copy, nonatomic) NSString *userHandle;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5 credentialID:(id)a6 userHandle:(id)a7;
- (id)initWithServiceIdentifier:(id)a0 serviceIdentifierType:(long long)a1 externalRecordIdentifier:(id)a2 user:(id)a3 rank:(long long)a4 credentialID:(id)a5 userHandle:(id)a6;

@end
