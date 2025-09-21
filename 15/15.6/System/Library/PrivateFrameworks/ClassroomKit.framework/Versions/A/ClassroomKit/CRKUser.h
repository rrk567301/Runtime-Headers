@class NSString, NSData, NSPersonNameComponents;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *userSource;
@property (nonatomic, getter=shouldUseMeCardIfAvailable) char useMeCardIfAvailable;
@property (copy, nonatomic) NSData *userImageData;
@property (nonatomic) long long role;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) char isMeCardUser;
@property (readonly, nonatomic) char isValid;

+ (id)customUserFromMeCardUser:(id)a0;
+ (id)makeMeCardUserProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (char)isEqualToUser:(id)a0;

@end
