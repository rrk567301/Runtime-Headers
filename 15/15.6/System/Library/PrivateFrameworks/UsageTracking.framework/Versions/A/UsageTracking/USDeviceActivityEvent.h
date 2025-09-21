@class NSSet, NSDateComponents;

@interface USDeviceActivityEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSSet *applicationTokens;
@property (readonly, copy) NSSet *categoryTokens;
@property (readonly, copy) NSSet *webDomainTokens;
@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSSet *webDomains;
@property (readonly, copy) NSDateComponents *threshold;
@property (readonly) char includesAllActivity;
@property (readonly) char includesPastActivity;
@property (readonly) char isUntokenized;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationTokens:(id)a0 categoryTokens:(id)a1 webDomainTokens:(id)a2 threshold:(id)a3 includesPastActivity:(char)a4;
- (id)initWithBundleIdentifiers:(id)a0 categoryIdentifiers:(id)a1 webDomains:(id)a2 threshold:(id)a3 includesPastActivity:(char)a4;

@end
