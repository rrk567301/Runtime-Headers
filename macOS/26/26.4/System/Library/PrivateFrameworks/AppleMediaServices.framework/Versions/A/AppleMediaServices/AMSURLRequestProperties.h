@class NSDictionary, NSString, AMSMetricsLoadURLOverlay, AMSKeychainOptions, ACAccount, AMSProcessInfo, AMSPurchaseInfo;
@protocol AMSBagProtocol, AMSResponseDecoding;

@interface AMSURLRequestProperties : NSObject <NSCopying>

@property (copy) ACAccount *account;
@property (retain) AMSMetricsLoadURLOverlay *loadURLOverlay;
@property long long anisetteType;
@property (retain) id<AMSBagProtocol> bag;
@property (copy) AMSProcessInfo *clientInfo;
@property long long dialogOptions;
@property BOOL disableBiometricsResponseHandling;
@property BOOL disableLoadURLMetrics;
@property BOOL disableResponseDecoding;
@property (copy) NSString *gsTokenIdentifier;
@property BOOL excludeIdentifierHeadersForAccount;
@property (copy) AMSKeychainOptions *keychainOptions;
@property BOOL knownToBeTrusted;
@property (copy) NSString *logUUID;
@property long long maxRetryCount;
@property long long mescalType;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property BOOL remoteSecuritySigningEnabled;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property long long reversePushType;
@property BOOL shouldSetCookiesFromResponse;
@property BOOL shouldSetStorefrontFromResponse;
@property (copy) NSDictionary *userInfo;
@property (retain) Class paymentSheetTaskClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;

@end
