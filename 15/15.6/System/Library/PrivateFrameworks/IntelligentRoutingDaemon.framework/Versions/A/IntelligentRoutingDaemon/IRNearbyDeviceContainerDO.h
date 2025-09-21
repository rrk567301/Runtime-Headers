@class NSSet, NSDate;

@interface IRNearbyDeviceContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *freezeDateNIHomeDevice;
@property (readonly, nonatomic) NSSet *nearbyDevices;

+ (id)miLoNearbyDeviceDOWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementFreezeDateNIHomeDevice:(id)a0;
- (id)copyWithReplacementNearbyDevices:(id)a0;
- (id)exportAsArray;
- (id)initWithFreezeDateNIHomeDevice:(id)a0 nearbyDevices:(id)a1;
- (char)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
