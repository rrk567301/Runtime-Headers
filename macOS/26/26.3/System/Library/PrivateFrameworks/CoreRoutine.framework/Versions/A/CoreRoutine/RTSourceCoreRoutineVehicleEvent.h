@class RTVehicleEvent;

@interface RTSourceCoreRoutineVehicleEvent : RTSourceCoreRoutine

@property (readonly, nonatomic) RTVehicleEvent *vehicleEvent;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVehicleEvent:(id)a0;

@end
