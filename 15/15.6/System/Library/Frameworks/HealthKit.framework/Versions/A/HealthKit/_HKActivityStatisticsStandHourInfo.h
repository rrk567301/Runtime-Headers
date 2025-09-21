@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double timeStamp;
@property (nonatomic) long long state;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeStamp:(double)a0 state:(long long)a1;

@end
