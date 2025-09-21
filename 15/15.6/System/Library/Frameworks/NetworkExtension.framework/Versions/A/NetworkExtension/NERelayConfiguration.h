@class NSArray, NEPerApp;

@interface NERelayConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSArray *internalMatchDomains;
@property (retain) NSArray *internalExcludedDomains;
@property (getter=isEnabled) char enabled;
@property (getter=isUIToggleEnabled) char uiToggleEnabled;
@property (copy) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *matchFQDNs;
@property (copy) NSArray *excludedFQDNs;
@property (copy) NEPerApp *perApp;
@property (copy) NSArray *onDemandRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)overlapsWithRelayConfiguration:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)overlapsWithAppVPNConfiguration:(id)a0;
- (char)overlapsWithVPNConfiguration:(id)a0;

@end
