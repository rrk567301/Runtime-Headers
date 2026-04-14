@interface EXSBaseProperties : NSObject

+ (id)dateFromComponents:(id)a0;
+ (id)components:(unsigned long long)a0 fromDate:(id)a1;
+ (id)log;
+ (id)itemPropertiesFromData:(id)a0;
+ (id)exsUTCCalendar;
+ (id)dateAtMidnight:(id)a0;
+ (id)dictionaryFromDateComponents:(id)a0;
+ (id)dateComponentsFromDictionary:(id)a0;
+ (id)dateByStrippingTime:(id)a0;

- (BOOL)propertySpecifiedForKey:(id)a0 dictionary:(id)a1;
- (id)dateComponentsForKey:(id)a0 dictionary:(id)a1;
- (BOOL)boolForKey:(id)a0 dictionary:(id)a1;
- (long long)integerForKey:(id)a0 dictionary:(id)a1;
- (id)stringForKey:(id)a0 dictionary:(id)a1;
- (double)timeIntervalForKey:(id)a0 dictionary:(id)a1;
- (id)dateForKey:(id)a0 dictionary:(id)a1;
- (id)timeZoneForKey:(id)a0 dictionary:(id)a1;
- (void)setDateComponents:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setBool:(BOOL)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setInteger:(long long)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setString:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setObjectValue:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setTimeInterval:(double)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setDate:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setTimeZone:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (id)dataFromProperties;

@end
