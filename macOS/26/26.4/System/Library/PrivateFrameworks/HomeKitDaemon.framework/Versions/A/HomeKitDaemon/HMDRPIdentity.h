@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRPIdentity:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceIRK:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
