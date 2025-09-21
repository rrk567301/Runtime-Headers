@class NSData, NSString, NSDate;

@interface CRKPrivateIdentity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *identityExpirationDate;
@property (retain, nonatomic) NSData *identityPersistentId;
@property (retain, nonatomic) NSDate *stagedIdentityExpirationDate;
@property (retain, nonatomic) NSData *stagedIdentityPersistentId;
@property (copy, nonatomic) NSString *commonNamePrefix;

+ (id)commonNameWithPrefix:(id)a0;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)a0;
+ (id)keychainGroup;
+ (id)makeIdentityWithCommonName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (id)initWithIdentityPersistentId:(id)a0 stagedIdentityPersistentId:(id)a1 commonNamePrefix:(id)a2;
- (char)refreshIdentities;

@end
