@class NSDate;

@interface CWFWiFiNetworkSharingNetworkMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL waitingForAssociation;
@property (copy) NSDate *firstSharedDate;
@property (copy) NSDate *mostRecentlySharedDate;
@property unsigned long long acknowledgedNetworksListUpdateCounterWhenShared;
@property long long askToShareStatus;
@property (copy) NSDate *askToShareStatusUpdatedTimestamp;
@property (copy) NSDate *lastModifiedDate;
@property unsigned long long acknowledgedNetworksListUpdateCounterWhenModified;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworkMetadata:(id)a0;

@end
