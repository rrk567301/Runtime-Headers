@class NSString, NSDictionary, AMSKeychainOptions, ACAccount, AMSProcessInfo, AMSPurchaseInfo;
@protocol AMSBagProtocol, AMSResponseDecoding;

@interface AMSURLRequestProperties : NSObject <NSCopying>

@property (copy) ACAccount *account;
@property (copy) NSDictionary *additionalMetrics;
@property long long anisetteType;
@property (retain) id<AMSBagProtocol> bag;
@property (copy) AMSProcessInfo *clientInfo;
@property long long dialogOptions;
@property char disableBiometricsResponseHandling;
@property char disableLoadURLMetrics;
@property char disableResponseDecoding;
@property (copy) NSString *gsTokenIdentifier;
@property char excludeIdentifierHeadersForAccount;
@property (copy) AMSKeychainOptions *keychainOptions;
@property char knownToBeTrusted;
@property (copy) NSString *logUUID;
@property long long maxRetryCount;
@property long long mescalType;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property char remoteSecuritySigningEnabled;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property long long reversePushType;
@property char shouldSetCookiesFromResponse;
@property char shouldSetStorefrontFromResponse;
@property (copy) NSDictionary *userInfo;
@property (retain) Class paymentSheetTaskClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
