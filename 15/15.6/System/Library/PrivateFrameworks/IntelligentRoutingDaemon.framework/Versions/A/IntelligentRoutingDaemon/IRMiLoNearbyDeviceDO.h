@class NSString;

@interface IRMiLoNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasBleRssi;
@property (readonly, nonatomic) NSString *deviceIdentifier;

+ (id)miLoNearbyDeviceDOWithHasBleRssi:(char)a0 deviceIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementDeviceIdentifier:(id)a0;
- (id)copyWithReplacementHasBleRssi:(char)a0;
- (id)initWithHasBleRssi:(char)a0 deviceIdentifier:(id)a1;
- (char)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
