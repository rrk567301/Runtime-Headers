@class NSString, NSDictionary, AMSBuyParams, ACAccount, AMSProcessInfo, NSNumber;

@interface AMSPurchase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *URLBagKey;
@property (retain) ACAccount *account;
@property (copy) NSDictionary *additionalHeaders;
@property (readonly, copy) AMSBuyParams *buyParams;
@property (readonly, copy) NSString *clientCorrelationKey;
@property (copy) AMSProcessInfo *clientInfo;
@property BOOL ignoreRequirePasswordRestriction;
@property (copy) NSString *logUUID;
@property (copy) NSNumber *ownerAccountId;
@property (copy) NSDictionary *metricsOverlay;
@property (copy) NSString *presentingSceneIdentifier;
@property (readonly) long long purchaseType;
@property (readonly, getter=isRedownload) BOOL redownload;
@property BOOL requiresAccount;
@property (copy) NSString *storefront;
@property (readonly) NSNumber *uniqueIdentifier;
@property (getter=isUserInitiated) BOOL userInitiated;
@property BOOL useJSONContentType;
@property (copy) NSString *callerBundleId;
@property (copy) NSString *clientId;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_generateIdentifier;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (BOOL)isEqualToPurchase:(id)a0;

@end
