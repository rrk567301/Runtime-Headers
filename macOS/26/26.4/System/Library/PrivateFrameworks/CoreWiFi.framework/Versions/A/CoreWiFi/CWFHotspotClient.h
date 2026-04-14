@class NSString, NSNumber, NSDate;

@interface CWFHotspotClient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSString *productColor;
@property (copy, nonatomic) NSString *productMarketingName;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *peerIdentifier;
@property (copy, nonatomic) NSNumber *dataUsageLastBytes;
@property (copy, nonatomic) NSNumber *dataUsageTotalBytes;
@property (copy, nonatomic) NSDate *dataUsageLastUpdated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 MACAddress:(id)a1 productColor:(id)a2 productMarketingName:(id)a3 productType:(id)a4 peerIdentifier:(id)a5 dataUsageLastBytes:(id)a6 dataUsageTotalBytes:(id)a7 dataUsageLastUpdated:(id)a8;

@end
