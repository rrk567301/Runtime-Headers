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

- (id)BSSID;
- (id)properties;
- (id)coreWiFiSpecificAttributes;
- (id)OSSpecificValueForKey:(id)a0;
- (id)__infoForLocation:(id)a0;
- (void)setAWDLRealTimeModeTimestamp:(id)a0;
- (void)setChannel:(id)a0;
- (id)externalForm;
- (id)__coreWiFiSpecificProperties;
- (BOOL)isEqualToBSS:(id)a0;
- (id)__keyForProperty:(long long)a0;
- (BOOL)wasJoinedRecentlyInProximityOf:(id)a0;
- (id)filteredBSSForClassDStorage;
- (id)init;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (void)setColocated5GHzRNRChannel:(id)a0;
- (void)setDHCPv6ServerID:(id)a0;
- (void)setOSSpecificAttributes:(id)a0;
- (id)filteredBSSWithProperties:(id)a0;
- (id)location;
- (id)lastAssociatedAt;
- (id)__locationFromInfo:(id)a0;
- (id)channel;
- (id)initWithExternalForm:(id)a0;
- (id)colocated5GHzRNRChannel;
- (void)mergeWithBSS:(id)a0;
- (id)__filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (id)IPv4NetworkSignature;
- (void)setColocated2GHzRNRChannel:(id)a0;
- (id)OSSpecificAttributes;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;
- (void)setLastAssociatedAt:(id)a0;
- (void)setDHCPServerID:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)AWDLRealTimeModeTimestamp;
- (id)__classDStorageProperties;
- (id)initWithCoder:(id)a0;
- (id)deepCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIPv4NetworkSignature:(id)a0;
- (void)setBSSID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)colocated2GHzRNRChannel;
- (id)IPv6NetworkSignature;
- (void)setIPv6NetworkSignature:(id)a0;
- (id)__defaultProperties;
- (long long)__propertyForKey:(id)a0;
- (id)DHCPv6ServerID;
- (id)DHCPServerID;
- (id)filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setOSSpecificValue:(id)a0 forKey:(id)a1;

@end
