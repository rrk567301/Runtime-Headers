@class NSUUID;

@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *residentDeviceIdentifier;
@property (readonly) char isReachable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithResidentDeviceIdentifier:(id)a0 isReachable:(char)a1;

@end
