@class RTPredictedContextDate;

@interface RTPredictedContextDateInterval : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTPredictedContextDate *startDate;
@property (readonly, copy, nonatomic) RTPredictedContextDate *endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
