@class NSString, NSDateInterval;

@interface RTVehicle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSString *vehicleName;
@property (readonly, copy, nonatomic) NSString *vehicleModelName;
@property (readonly, copy, nonatomic) NSString *bluetoothAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 vehicleName:(id)a1 vehicleModelName:(id)a2 bluetoothAddress:(id)a3;

@end
