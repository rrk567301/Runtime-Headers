@interface CalNthWeekDay : NSObject <NSCopying>

@property (readonly) unsigned long long dayOfTheWeek;
@property (readonly) long long weekNumber;

+ (id)nthWeekDayWithDayOfTheWeek:(unsigned long long)a0 weekNumber:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDayOfTheWeek:(unsigned long long)a0 weekNumber:(long long)a1;

@end
