@class NSString, NSDate;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rangeWithRange:(id)a0;
+ (char)range:(id)a0 intersectsRange:(id)a1;
+ (char)range:(id)a0 intersectsRange:(id)a1 allowSinglePointIntersection:(char)a2;
+ (char)range:(id)a0 intersectsRangeWithStartDate:(id)a1 endDate:(id)a2;
+ (char)range:(id)a0 intersectsRangeWithStartDate:(id)a1 endDate:(id)a2 allowSinglePointIntersection:(char)a3;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 components:(id)a2 calendar:(id)a3;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 duration:(double)a2;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 multiplier:(unsigned long long)a2;
+ (id)rangeWithStartDate:(id)a0 duration:(double)a1;
+ (id)rangeWithStartDate:(id)a0 endDate:(id)a1;
+ (char)rangesIntersectWithStartDate1:(id)a0 endDate1:(id)a1 startDate2:(id)a2 endDate2:(id)a3;
+ (char)rangesIntersectWithStartDate1:(id)a0 endDate1:(id)a1 startDate2:(id)a2 endDate2:(id)a3 allowSinglePointIntersection:(char)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)setDuration:(double)a0;
- (char)containsRange:(id)a0;
- (id)midpoint;
- (id)_calculateMidnightsInCalendar:(id)a0;
- (id)briefDescription;
- (id)intersectionWithRange:(id)a0;
- (char)intersectsRange:(id)a0;
- (char)intersectsRange:(id)a0 allowSinglePointIntersection:(char)a1;
- (char)intersectsRangeWithStartDate:(id)a0 endDate:(id)a1;
- (char)intersectsRangeWithStartDate:(id)a0 endDate:(id)a1 allowSinglePointIntersection:(char)a2;
- (id)midnightsForRangeInTimeZoneString:(id)a0;
- (void)setStartDate:(id)a0 duration:(double)a1;
- (void)setStartDate:(id)a0 endDate:(id)a1;
- (id)subtractRange:(id)a0;
- (id)unionRange:(id)a0;

@end
