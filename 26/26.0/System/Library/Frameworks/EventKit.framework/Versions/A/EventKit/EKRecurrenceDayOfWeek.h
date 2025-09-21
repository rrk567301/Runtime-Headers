@class NSString;

@interface EKRecurrenceDayOfWeek : NSObject <EKRecurrenceDayOfWeekModel, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iCalendarValueFromDayOfTheWeek:(long long)a0;
+ (id)dayOfWeek:(long long)a0 weekNumber:(long long)a1;
+ (id)dayOfWeek:(long long)a0;
+ (id)iCalendarDescriptionForDayOfWeek:(id)a0;
+ (long long)icsWeekDayFromDayOfTheWeek:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDayOfTheWeek:(long long)a0 weekNumber:(long long)a1;
- (id)iCalendarDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
