@class MNVehicleParkingInfo;

@interface MNNavigationServiceCallback_DidUpdateVehicleParkingInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
