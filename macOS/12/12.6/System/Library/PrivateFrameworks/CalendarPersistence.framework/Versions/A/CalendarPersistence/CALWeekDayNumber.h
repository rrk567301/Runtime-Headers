@interface CALWeekDayNumber : NSObject {
    long long _number;
    unsigned long long _day;
}

+ (id)weekDayNumberWithDay:(unsigned long long)a0 withNumber:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)setDay:(unsigned long long)a0;
- (unsigned long long)day;
- (long long)number;
- (id)setNumber:(long long)a0;
- (id)initWithDay:(unsigned long long)a0 withNumber:(long long)a1;
- (long long)compareDay:(id)a0;

@end
