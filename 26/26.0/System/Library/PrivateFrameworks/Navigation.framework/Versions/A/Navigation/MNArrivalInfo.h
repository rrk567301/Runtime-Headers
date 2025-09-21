@class MNVehicleParkingInfo, GEOComposedWaypoint;

@interface MNArrivalInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long arrivalState;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;
@property (readonly, nonatomic) BOOL isInArrivalState;
@property (readonly, nonatomic) BOOL isInParkingState;

- (void)setVehicleParkingInfo:(id)a0;
- (void)setDestination:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setLegIndex:(unsigned long long)a0;
- (void)setArrivalState:(long long)a0;

@end
