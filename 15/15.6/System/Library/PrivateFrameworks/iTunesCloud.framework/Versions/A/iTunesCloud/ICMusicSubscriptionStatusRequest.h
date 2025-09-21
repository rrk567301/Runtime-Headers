@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldBypassEnforcementOfPrivacyAcknowledgement;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long reason;
@property (nonatomic) char shouldIgnoreCache;
@property (nonatomic) char allowsFallbackToExpiredStatus;
@property (nonatomic) char allowsFallbackToStatusNeedingReload;
@property (nonatomic) char shouldReturnLastKnownStatusOnly;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (readonly, nonatomic) NSUUID *requestIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreRequestContext:(id)a0;

@end
