@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceIRK:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)isEqualToRPIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
