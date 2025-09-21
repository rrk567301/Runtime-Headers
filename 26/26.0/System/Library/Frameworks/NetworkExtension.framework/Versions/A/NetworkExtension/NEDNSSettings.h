@class NSUUID, NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useForAllDomains;
@property (retain, nonatomic) NSUUID *proxyAgentUUID;
@property (readonly) long long dnsProtocol;
@property (readonly) NSArray *servers;
@property (copy) NSArray *searchDomains;
@property (copy) NSString *domainName;
@property (copy) NSArray *matchDomains;
@property BOOL matchDomainsNoSearch;
@property BOOL allowFailover;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServers:(id)a0;

@end
