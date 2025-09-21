@class NSString, NSArray, NSSet;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isPaymentAccount) char paymentAccount;
@property (readonly, nonatomic) unsigned long long allowManagedAppleID;
@property (readonly, copy, nonatomic) NSString *encryptionScheme;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountSuffix;
@property (copy, nonatomic) NSArray *cardDetails;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSSet *productIdentifiers;
@property (nonatomic) char requiresFelicaSecureElement;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_effectiveDetails;
- (id)_filterWebServices:(id)a0 primaryAccountIdentifierRequired:(char)a1;
- (id)initWithEncryptionScheme:(id)a0;
- (void)updateAllowManagedAppleIDWithEntitlements:(id)a0;

@end
