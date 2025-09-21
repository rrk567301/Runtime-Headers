@class NSDate;

@interface HMAccessoryNetworkAccessViolation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=hasCurrentViolation) char currentViolation;
@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;

@end
