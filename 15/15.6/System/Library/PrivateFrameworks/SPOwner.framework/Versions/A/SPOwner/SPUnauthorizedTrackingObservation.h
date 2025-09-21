@class NSUUID, NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long action;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (copy, nonatomic) NSArray *observedLocations;
@property (copy, nonatomic) NSDate *observedAt;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 type:(long long)a1 trackingIdentifier:(id)a2 observedLocations:(id)a3;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)a0 observedLocations:(id)a1;

@end
