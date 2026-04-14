@class EKRecurrenceDayOfWeek;

@interface CalNthWeekDay : NSObject <NSCopying>

@property (retain, nonatomic) EKRecurrenceDayOfWeek *ekRecurrenceDayOfWeek;
@property (readonly) unsigned long long dayOfTheWeek;
@property (readonly) long long weekNumber;

+ (id)nthWeekDayWithDayOfTheWeek:(unsigned long long)a0 weekNumber:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEKRecurrenceDayOfWeek:(id)a0;

@end
