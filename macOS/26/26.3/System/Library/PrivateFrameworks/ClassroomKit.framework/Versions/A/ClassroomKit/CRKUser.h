@class NSString, NSData, NSPersonNameComponents;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *userSource;
@property (nonatomic, getter=shouldUseMeCardIfAvailable) BOOL useMeCardIfAvailable;
@property (copy, nonatomic) NSData *userImageData;
@property (nonatomic) long long role;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) BOOL isMeCardUser;
@property (readonly, nonatomic) BOOL isValid;

+ (id)customUserFromMeCardUser:(id)a0;
+ (id)makeMeCardUserProvider;

- (BOOL)isEqualToUser:(id)a0;
- (id)dictionaryValue;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
