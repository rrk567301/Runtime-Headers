@class NSDate;

@interface FUFutureFlightState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long futureState;
@property (copy) NSDate *expectedDate;

+ (id)newWithState:(long long)a0 andDate:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithState:(long long)a0 andDate:(id)a1;

@end
