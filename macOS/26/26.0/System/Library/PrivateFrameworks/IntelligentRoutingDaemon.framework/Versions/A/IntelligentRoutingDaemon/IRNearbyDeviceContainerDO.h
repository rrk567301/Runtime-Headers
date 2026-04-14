@class NSSet, NSDate;

@interface IRNearbyDeviceContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *freezeDateNIHomeDevice;
@property (readonly, nonatomic) NSSet *nearbyDevices;

+ (id)miLoNearbyDeviceDOWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementFreezeDateNIHomeDevice:(id)a0;
- (id)copyWithReplacementNearbyDevices:(id)a0;
- (id)exportAsArray;
- (id)initWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;
- (BOOL)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
