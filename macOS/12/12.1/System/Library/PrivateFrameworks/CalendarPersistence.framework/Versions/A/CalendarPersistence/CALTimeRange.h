@class CALDate, CALDuration;

@interface CALTimeRange : NSObject <NSSecureCoding> {
    CALDate *_startDate;
    CALDate *_endDate;
    CALDuration *_duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timeRangeWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)timeRangeForDayEnglobing:(id)a0;
+ (id)timeRangeWithStartDate:(id)a0 withDuration:(id)a1;
+ (id)timeRangeFromTimeRangeRoundedToFullDays:(id)a0;
+ (id)timeRangeUnboundedWithStartDate:(id)a0;
+ (id)timeRangeUnboundedWithEndDate:(id)a0;
+ (id)timeRangeFromTimeRange:(id)a0 withShift:(id)a1;
+ (id)timeRangeUnbounded;
+ (id)simplifyOverlappingTimeRanges:(id)a0;
+ (id)timeRangeForRecurrencesFromDate:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (id)endDate;
- (id)startDate;
- (id)duration;
- (BOOL)isInfinite;
- (long long)compareStartDate:(id)a0;
- (id)intersection:(id)a0;
- (id)initForDayEnglobing:(id)a0;
- (id)initWithStartDate:(id)a0 withDuration:(id)a1;
- (id)initWithStartDate:(id)a0 withEndDate:(id)a1;
- (id)initUnboundedWithStartDate:(id)a0;
- (id)initUnboundedWithEndDate:(id)a0;
- (id)initFromTimeRange:(id)a0 withShift:(id)a1;
- (BOOL)includesDate:(id)a0;
- (BOOL)intersectsTimeRangeExcludingBounds:(id)a0;
- (BOOL)includesDateExcludingBounds:(id)a0;
- (BOOL)intersectsTimeRange:(id)a0;
- (BOOL)includesOrEqualsTimeRange:(id)a0;
- (id)initAsUnbounded;
- (BOOL)isZeroDuration;
- (BOOL)includesDateExcludingEndDate:(id)a0;
- (BOOL)intersectsTimeRangeExcludingUpperBound:(id)a0;
- (BOOL)strictlyIncludesTimeRange:(id)a0;
- (id)union:(id)a0;
- (id)minus:(id)a0;

@end
