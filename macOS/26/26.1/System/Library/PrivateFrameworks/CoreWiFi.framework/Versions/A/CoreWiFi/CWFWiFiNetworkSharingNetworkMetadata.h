@class NSDate;

@interface CWFWiFiNetworkSharingNetworkMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL waitingForAssociation;
@property (copy) NSDate *firstSharedDate;
@property (copy) NSDate *mostRecentlySharedDate;
@property long long askToShareStatus;
@property (copy) NSDate *askToShareStatusUpdatedTimestamp;
@property (copy) NSDate *lastModifiedDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworkMetadata:(id)a0;

@end
