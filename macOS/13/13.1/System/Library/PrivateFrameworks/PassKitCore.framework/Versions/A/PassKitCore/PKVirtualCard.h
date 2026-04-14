@class NSString, CNContact, NSData, NSDate, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari;
@property (nonatomic) BOOL supportsLocalStorage;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) NSString *securityCodeIdentifier;
@property (copy, nonatomic) NSDate *securityCodeExpiration;
@property (nonatomic) BOOL hasDynamicSecurityCode;
@property (copy, nonatomic) CNContact *billingAddress;
@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *nameFromSafari;
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials;

+ (id)cardsForPaymentPass:(id)a0;
+ (id)cardsForPaymentPass:(id)a0 accordingToWebService:(id)a1;
+ (id)demoVPANVirtualCards;
+ (void)queryKeychainForVirtualCards:(id /* block */)a0;
+ (void)deleteAllLocalKeychainVirtualCards;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithKeychainData:(id)a0;
- (id)mergeVirtualCardWith:(id)a0;
- (BOOL)hasSensitiveCredentials;
- (BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (id)generateHashWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (void)setLastAutoFilledBySafariWithCompletion:(id /* block */)a0;
- (void)setContactNameEnteredInSafari:(id)a0 completion:(id /* block */)a1;
- (void)writeKeychainVirtualCardToKeychain;
- (id)keychainVirtualCard;
- (void)deleteKeychainVirtualCard;
- (void)deleteLocalKeychainVirtualCard;
- (BOOL)isValidFromKeychain;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;

@end
