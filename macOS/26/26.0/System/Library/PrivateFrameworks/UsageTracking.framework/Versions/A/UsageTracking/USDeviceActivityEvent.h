@class NSSet, NSDateComponents;

@interface USDeviceActivityEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *applicationTokens;
@property (readonly, copy) NSSet *categoryTokens;
@property (readonly, copy) NSSet *webDomainTokens;
@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSSet *webDomains;
@property (readonly, copy) NSSet *exemptApplicationTokens;
@property (readonly, copy) NSSet *exemptBundleIdentifiers;
@property (readonly, copy) NSDateComponents *threshold;
@property (readonly) BOOL includesAllActivity;
@property (readonly) BOOL includesPastActivity;
@property (readonly) BOOL isUntokenized;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationTokens:(id)a0 categoryTokens:(id)a1 webDomainTokens:(id)a2 threshold:(id)a3 includesPastActivity:(BOOL)a4;
- (id)initWithApplicationTokens:(id)a0 exemptApplicationTokens:(id)a1 categoryTokens:(id)a2 webDomainTokens:(id)a3 threshold:(id)a4 includesPastActivity:(BOOL)a5;
- (id)initWithBundleIdentifiers:(id)a0 categoryIdentifiers:(id)a1 webDomains:(id)a2 threshold:(id)a3 includesPastActivity:(BOOL)a4;
- (id)initWithBundleIdentifiers:(id)a0 exemptBundleIdentifiers:(id)a1 categoryIdentifiers:(id)a2 webDomains:(id)a3 threshold:(id)a4 includesPastActivity:(BOOL)a5;

@end
