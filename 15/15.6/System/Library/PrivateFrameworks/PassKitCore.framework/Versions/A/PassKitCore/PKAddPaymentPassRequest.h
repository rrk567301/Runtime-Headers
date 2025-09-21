@class NSString, NSData;

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion;
@property (copy, nonatomic) NSData *FPInfo;
@property (copy, nonatomic) NSData *encryptedPassData;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *wrappedKey;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_hasRequiredFields:(char)a0;
- (char)_hasRequiredThirdPartyFields:(char)a0;

@end
