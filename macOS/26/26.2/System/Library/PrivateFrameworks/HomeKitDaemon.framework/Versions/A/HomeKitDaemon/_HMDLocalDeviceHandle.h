@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

+ (BOOL)isValidDestination:(id)a0;
+ (BOOL)supportsSecureCoding;

- (id)initWithDestination:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)privateDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)destination;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isLocal;

@end
