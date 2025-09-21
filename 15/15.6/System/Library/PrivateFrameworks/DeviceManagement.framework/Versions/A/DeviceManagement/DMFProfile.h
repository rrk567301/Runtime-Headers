@class NSString, NSArray, NSDictionary;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long profileVersion;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *organization;
@property (readonly, copy, nonatomic) NSString *profileDescription;
@property (readonly, nonatomic) char isManaged;
@property (readonly, nonatomic) char isLocked;
@property (readonly, nonatomic) char hasRemovalPasscode;
@property (readonly, nonatomic) char isEncrypted;
@property (readonly, copy, nonatomic) NSArray *signerCertificates;
@property (readonly, copy, nonatomic) NSArray *payloads;
@property (readonly, copy, nonatomic) NSDictionary *restrictions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 profileVersion:(long long)a3 displayName:(id)a4 organization:(id)a5 profileDescription:(id)a6 isManaged:(char)a7 isLocked:(char)a8 hasRemovalPasscode:(char)a9 isEncrypted:(char)a10 signerCertificates:(id)a11 payloads:(id)a12 restrictions:(id)a13;

@end
