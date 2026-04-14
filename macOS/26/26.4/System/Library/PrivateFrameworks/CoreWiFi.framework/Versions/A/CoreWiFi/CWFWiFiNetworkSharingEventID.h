@class CWFWiFiNetworkSharingClientID, NSData;

@interface CWFWiFiNetworkSharingEventID : CWFEventID <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFWiFiNetworkSharingClientID *clientID;
@property (copy, nonatomic) NSData *networkListUpdateEventPredicateData;
@property (copy, nonatomic) NSData *connectedAPUpdateEventPredicateData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingEventID:(id)a0;

@end
