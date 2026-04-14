@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SPAdvertisement *advertisement;
@property (copy, nonatomic) SPEstimatedLocation *location;
@property (nonatomic) long long observationValue;
@property (nonatomic) BOOL refreshGeotag;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAdvertisement:(id)a0 location:(id)a1;

@end
