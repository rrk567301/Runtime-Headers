@class NEIPv6Settings, NEIPv4Settings;

@interface NEVPNProtocolPPP : NEVPNProtocol

@property long long authenticationMethod;
@property char verboseLoggingEnabled;
@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyLegacyDictionaryComplete:(char)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
