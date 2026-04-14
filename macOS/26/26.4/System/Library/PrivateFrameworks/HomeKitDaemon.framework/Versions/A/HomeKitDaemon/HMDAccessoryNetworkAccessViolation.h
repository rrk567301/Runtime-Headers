@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;
@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;

+ (id)noViolation;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;
- (id)initWithLastViolationTimeInterval:(id)a0 lastViolationResetTimeInterval:(id)a1;

@end
