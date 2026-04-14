@class NSTimeZone, NSDate;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long floatingDateSecondsFromGMT;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dateByAdjustingFloatingDateForDefaultTimeZone;
- (id)dateByAdjustingFloatingDateForTimeZone:(id)a0;
- (id)dateComponentsRepresentation;
- (id)initWithDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2 floatingDateSecondsFromGMT:(long long)a3;
- (id)initWithDueDateComponents:(id)a0 alarms:(id)a1;
- (id)initWithFloatingDateComponents:(id)a0 nonFloatingDateComponents:(id)a1;

@end
