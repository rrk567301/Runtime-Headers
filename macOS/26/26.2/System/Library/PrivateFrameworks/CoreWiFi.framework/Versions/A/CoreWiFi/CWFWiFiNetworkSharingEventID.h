@class CWFWiFiNetworkSharingClientID, NSData;

@interface CWFWiFiNetworkSharingEventID : CWFEventID <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFWiFiNetworkSharingClientID *clientID;
@property (copy, nonatomic) NSData *networkListUpdateEventPredicateData;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToWiFiNetworkSharingEventID:(id)a0;

@end
