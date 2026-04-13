@class NSUUID;

@interface SPPairingState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (nonatomic) long long status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 beaconIdentifier:(id)a1;

@end
