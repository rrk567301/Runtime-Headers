@class NSString, NSData, NSArray;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long epochTimestamp;
@property (readonly, nonatomic) unsigned long long expiresAt;
@property (readonly, nonatomic) NSString *merchantSessionIdentifier;
@property (readonly, nonatomic) NSString *nonce;
@property (readonly, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) NSString *operationalAnalyticsIdentifier;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *initiativeContext;
@property (readonly, nonatomic) NSString *initiative;
@property (readonly, nonatomic) NSData *ampEnrollmentPinning;
@property (readonly, nonatomic) NSArray *signedFields;
@property (readonly, nonatomic) NSData *signature;
@property (retain, nonatomic) NSString *retryNonce;
@property (readonly, nonatomic) BOOL isDelegatedSession;
@property (copy, nonatomic) NSString *delegateDisplayName;

+ (long long)version;
+ (id)paymentMerchantSessionWithProtobuf:(id)a0;

- (id)protobuf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)signedData;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)_isModern;
- (id)initWithDelegateDisplayName:(id)a0 merchantIdentifier:(id)a1 displayName:(id)a2 initiative:(id)a3 initiativeContext:(id)a4 merchantSessionIdentifier:(id)a5 nonce:(id)a6 epochTimestamp:(unsigned long long)a7 expiresAt:(unsigned long long)a8 operationalAnalyticsIdentifier:(id)a9 signedFields:(id)a10 signature:(id)a11;
- (id)initWithMerchantIdentifier:(id)a0 merchantSessionIdentifier:(id)a1 nonce:(id)a2 epochTimestamp:(unsigned long long)a3 domain:(id)a4 displayName:(id)a5 signature:(id)a6;
- (id)initWithMerchantIdentifier:(id)a0 merchantSessionIdentifier:(id)a1 nonce:(id)a2 epochTimestamp:(unsigned long long)a3 expiresAt:(unsigned long long)a4 displayName:(id)a5 initiativeContext:(id)a6 initiative:(id)a7 ampEnrollmentPinning:(id)a8 operationalAnalyticsIdentifier:(id)a9 signedFields:(id)a10 signature:(id)a11;
- (id)initWithMerchantIdentifier:(id)a0 merchantSessionIdentifier:(id)a1 nonce:(id)a2 epochTimestamp:(unsigned long long)a3 expiresAt:(unsigned long long)a4 displayName:(id)a5 initiativeContext:(id)a6 initiative:(id)a7 signedFields:(id)a8 signature:(id)a9;
- (id)initWithMerchantIdentifier:(id)a0 merchantSessionIdentifier:(id)a1 nonce:(id)a2 epochTimestamp:(unsigned long long)a3 expiresAt:(unsigned long long)a4 domain:(id)a5 displayName:(id)a6 operationalAnalyticsIdentifier:(id)a7 signature:(id)a8;
- (BOOL)isEqualToPaymentMerchantSession:(id)a0;
- (BOOL)supportsURL:(id)a0;

@end
