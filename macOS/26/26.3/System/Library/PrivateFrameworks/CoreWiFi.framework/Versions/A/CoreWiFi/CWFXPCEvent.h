@class CWFEventID, NSUUID, NSString, CWFWiFiNetworkSharingClientID, NSData, NSDictionary, NSDate;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (nonatomic) long long internalType;
@property (copy, nonatomic) CWFWiFiNetworkSharingClientID *wifiNetworkSharingClientID;
@property (copy, nonatomic) NSData *wifiNetworkSharingNetworkListUpdateEventPredicateData;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (readonly) CWFEventID *eventID;

- (id)__descriptionForEventType;
- (id)description;
- (id)init;
- (BOOL)isEqualToXPCEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
