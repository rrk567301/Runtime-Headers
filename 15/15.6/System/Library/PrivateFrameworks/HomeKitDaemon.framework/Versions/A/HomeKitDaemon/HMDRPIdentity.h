@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)logIdentifier;
- (id)initWithDeviceIRK:(id)a0;
- (char)isEqualToRPIdentity:(id)a0;

@end
