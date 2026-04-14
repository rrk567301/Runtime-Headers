@class RTPredictedContextDate;

@interface RTPredictedContextDateInterval : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTPredictedContextDate *startDate;
@property (readonly, copy, nonatomic) RTPredictedContextDate *endDate;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;

@end
