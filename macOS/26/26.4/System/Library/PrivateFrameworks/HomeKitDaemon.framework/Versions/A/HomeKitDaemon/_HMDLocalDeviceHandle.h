@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)initWithDestination:(id)a0;
- (id)privateDescription;
- (id)destination;
- (BOOL)isLocal;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
