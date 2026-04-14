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

- (id)deepCopy;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (id)properties;
- (id)filteredBSSWithProperties:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)IPv6NetworkSignature;
- (id)colocated5GHzRNRChannel;
- (id)__classDStorageProperties;
- (void)setIPv4NetworkSignature:(id)a0;
- (id)DHCPServerID;
- (id)AWDLRealTimeModeTimestamp;
- (void)setColocated2GHzRNRChannel:(id)a0;
- (id)__locationFromInfo:(id)a0;
- (id)filteredBSSForClassDStorage;
- (id)channel;
- (void)setLocation:(id)a0;
- (id)BSSID;
- (void)setDHCPServerID:(id)a0;
- (void)setBSSID:(id)a0;
- (void)setAWDLRealTimeModeTimestamp:(id)a0;
- (void)setOSSpecificValue:(id)a0 forKey:(id)a1;
- (void)setLastAssociatedAt:(id)a0;
- (long long)__propertyForKey:(id)a0;
- (void)setIPv6NetworkSignature:(id)a0;
- (id)__infoForLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExternalForm:(id)a0;
- (void)mergeWithBSS:(id)a0;
- (id)colocated2GHzRNRChannel;
- (id)__coreWiFiSpecificProperties;
- (id)__keyForProperty:(long long)a0;
- (id)__filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (BOOL)wasJoinedRecentlyInProximityOf:(id)a0;
- (id)lastAssociatedAt;
- (id)IPv4NetworkSignature;
- (id)initWithCoder:(id)a0;
- (void)setColocated5GHzRNRChannel:(id)a0;
- (void)setChannel:(id)a0;
- (id)coreWiFiSpecificAttributes;
- (void).cxx_destruct;
- (id)DHCPv6ServerID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDHCPv6ServerID:(id)a0;
- (void)setOSSpecificAttributes:(id)a0;
- (id)location;
- (BOOL)isEqual:(id)a0;
- (id)filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (id)OSSpecificValueForKey:(id)a0;
- (id)OSSpecificAttributes;
- (BOOL)isEqualToBSS:(id)a0;
- (id)__defaultProperties;
- (id)init;
- (id)externalForm;

@end
