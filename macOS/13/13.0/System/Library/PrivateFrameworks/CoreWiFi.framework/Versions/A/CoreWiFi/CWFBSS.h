@class NSString, CWFChannel, NSDictionary, NSDate, CLLocation;

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDate *AWDLRealTimeModeTimestamp;
@property (copy, nonatomic) NSString *colocatedScopeID;
@property (copy, nonatomic) NSString *routerMACAddress;
@property (copy, nonatomic) NSString *routerIPAddress;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)externalForm;
- (id)initWithExternalForm:(id)a0;
- (id)coreWiFiSpecificAttributes;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (void)__updateWithExternalForm:(id)a0;
- (id)__coreWiFiSpecificKeys;
- (BOOL)isEqualToBSS:(id)a0;

@end
