@class NSString, NSMutableDictionary, NSData, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSCopying, NSSecureCoding, GEOXPCSerializable> {
    geo_isolater *_isolater;
    NSData *_tokenData;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    NSMutableDictionary *_entitlementValueCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier;
@property (readonly, nonatomic) NSString *proxiedBundleId;
@property (readonly, nonatomic, getter=isProxiedExternalBundleId) BOOL proxiedExternalBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compositeTokenForTokens:(id)a0;
+ (id)currentProcessAuditToken;

- (id)overrideTokenWithProxiedBundleId:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)initCommon;
- (id)initWithProxiedApplicationBundleId:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)publicLogDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuditTokenData:(id)a0;
- (id)bundleIdForNetworkAttribution;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSecondaryIdentifier:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithProxiedExternalApplicationBundleId:(id)a0;
- (id)initWithNSXPCConnection:(id)a0;
- (id)overrideTokenWithSecondaryIdentifier:(id)a0;
- (id)init;
- (id)bundleId;
- (id)backingTokenData;
- (BOOL)hasEntitlement:(id)a0;
- (id)_bundleIdForAuditToken;
- (id)_valueForEntitlement:(id)a0;
- (id)valuesForEntitlement:(id)a0;
- (id)initWithCoder:(id)a0;

@end
