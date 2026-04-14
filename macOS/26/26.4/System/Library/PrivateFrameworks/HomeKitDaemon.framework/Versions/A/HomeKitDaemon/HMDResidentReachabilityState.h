@class NSUUID;

@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *residentDeviceIdentifier;
@property (readonly) BOOL isReachable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithResidentDeviceIdentifier:(id)a0 isReachable:(BOOL)a1;

@end
