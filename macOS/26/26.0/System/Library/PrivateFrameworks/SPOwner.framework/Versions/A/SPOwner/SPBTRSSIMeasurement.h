@class NSUUID, NSDate;

@interface SPBTRSSIMeasurement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) long long rssi;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBeaconIdentifier:(id)a0 timestamp:(id)a1 channel:(long long)a2 rssi:(long long)a3;

@end
