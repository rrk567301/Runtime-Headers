@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;
@property (readonly, getter=hasCurrentViolation) char currentViolation;

+ (id)noViolation;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;
- (id)initWithLastViolationTimeInterval:(id)a0 lastViolationResetTimeInterval:(id)a1;

@end
