@class ATXTime, NSDateComponents, NSDate;

@interface ATXProposedRescheduledDate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateTime;
@property (readonly, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeStart;
@property (readonly, nonatomic) ATXTime *fuzzyTimeRangeEnd;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateTime:(id)a0;
- (id)initWithDayComponents:(id)a0;
- (id)initWithDayComponents:(id)a0 fuzzyTimeRangeStart:(id)a1 fuzzyTimeRangeEnd:(id)a2;
- (id)initWithHourComponents:(id)a0;

@end
