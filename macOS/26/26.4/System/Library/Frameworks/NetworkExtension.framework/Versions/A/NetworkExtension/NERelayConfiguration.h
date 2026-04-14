@class NSArray, NSDictionary, NEPerApp;

@interface NERelayConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *internalMatchDomains;
@property (retain) NSArray *internalExcludedDomains;
@property (retain) NSDictionary *cachedPvDConfig;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isUIToggleEnabled) BOOL uiToggleEnabled;
@property (getter=isDNSFailoverAllowed) BOOL allowDNSFailover;
@property (copy) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *matchFQDNs;
@property (copy) NSArray *excludedFQDNs;
@property (copy) NEPerApp *perApp;
@property (copy) NSArray *onDemandRules;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)overlapsWithRelayConfiguration:(id)a0;
- (BOOL)isFullDevice;
- (BOOL)overlapsWithAppVPNConfiguration:(id)a0;
- (BOOL)overlapsWithVPNConfiguration:(id)a0;

@end
