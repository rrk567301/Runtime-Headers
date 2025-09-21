@class NSData, NSString, NSDate, NSSet, NSMutableDictionary, CWFChannel, NSDictionary, CLLocation;

@interface CWFBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *internal;
@property (readonly, copy, nonatomic) NSSet *properties;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDate *AWDLRealTimeModeTimestamp;
@property (copy, nonatomic) NSData *DHCPServerID;
@property (copy, nonatomic) NSData *DHCPv6ServerID;
@property (copy, nonatomic) NSString *IPv4NetworkSignature;
@property (copy, nonatomic) NSString *IPv6NetworkSignature;
@property (copy, nonatomic) CWFChannel *colocated2GHzRNRChannel;
@property (copy, nonatomic) CWFChannel *colocated5GHzRNRChannel;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

+ (id)supportedOSSpecificKeys;

- (id)IPv4NetworkSignature;
- (void)setBSSID:(id)a0;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (id)IPv6NetworkSignature;
- (id)DHCPServerID;
- (id)externalForm;
- (id)BSSID;
- (id)DHCPv6ServerID;
- (id)AWDLRealTimeModeTimestamp;
- (id)__infoForLocation:(id)a0;
- (long long)__propertyForKey:(id)a0;
- (id)__keyForProperty:(long long)a0;
- (void)setChannel:(id)a0;
- (id)filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (void)setAWDLRealTimeModeTimestamp:(id)a0;
- (id)coreWiFiSpecificAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)__classDStorageProperties;
- (void)encodeWithCoder:(id)a0;
- (id)OSSpecificAttributes;
- (id)colocated2GHzRNRChannel;
- (id)deepCopy;
- (void)setLastAssociatedAt:(id)a0;
- (id)channel;
- (id)initWithExternalForm:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;
- (id)init;
- (void)setColocated2GHzRNRChannel:(id)a0;
- (id)properties;
- (void)setIPv6NetworkSignature:(id)a0;
- (id)__filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (void)setOSSpecificAttributes:(id)a0;
- (id)colocated5GHzRNRChannel;
- (void)mergeWithBSS:(id)a0;
- (id)OSSpecificValueForKey:(id)a0;
- (void)setLocation:(id)a0;
- (id)__coreWiFiSpecificProperties;
- (id)initWithCoder:(id)a0;
- (void)setColocated5GHzRNRChannel:(id)a0;
- (void)setDHCPServerID:(id)a0;
- (void)setOSSpecificValue:(id)a0 forKey:(id)a1;
- (id)__locationFromInfo:(id)a0;
- (id)filteredBSSForClassDStorage;
- (void)setDHCPv6ServerID:(id)a0;
- (id)filteredBSSWithProperties:(id)a0;
- (id)lastAssociatedAt;
- (BOOL)isEqual:(id)a0;
- (id)location;
- (void)setIPv4NetworkSignature:(id)a0;
- (id)__defaultProperties;
- (void).cxx_destruct;
- (BOOL)wasJoinedRecentlyInProximityOf:(id)a0;

@end
