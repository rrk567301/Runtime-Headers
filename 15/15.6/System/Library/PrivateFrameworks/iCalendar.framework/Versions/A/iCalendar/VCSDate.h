@class NSDateComponents;

@interface VCSDate : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) char floating;
@property (readonly, nonatomic) char dateOnly;

+ (id)dateListFromData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dateForEndOfDay;
- (id)dateWithTimeComponentsFromDate:(id)a0;
- (id)dateByAddingDays:(long long)a0;
- (id)initWithDateComponents:(id)a0 floating:(char)a1 dateOnly:(char)a2;
- (id)initWithDateString:(const char *)a0;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 floating:(char)a6 dateOnly:(char)a7;
- (id)nsDateWithLocalTimeZone:(id)a0;

@end
