@class NSString, CWFChannel, NSData, NSDate, CLLocation, NSDictionary;

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)coreWiFiSpecificAttributes;
- (id)externalForm;
- (id)initWithExternalForm:(id)a0;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (id)__coreWiFiSpecificKeys;
- (void)__updateWithExternalForm:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;

@end
