@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

+ (char)supportsSecureCoding;
+ (char)isValidDestination:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destination;
- (char)isLocal;
- (id)privateDescription;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)initWithDestination:(id)a0;

@end
