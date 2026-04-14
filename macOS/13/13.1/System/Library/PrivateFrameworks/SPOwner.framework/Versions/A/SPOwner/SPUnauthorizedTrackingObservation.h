@class NSUUID, NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long action;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (copy, nonatomic) NSArray *observedLocations;
@property (copy, nonatomic) NSDate *observedAt;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)a0 observedLocations:(id)a1;
- (id)initWithAction:(long long)a0 type:(long long)a1 trackingIdentifier:(id)a2 observedLocations:(id)a3;

@end
