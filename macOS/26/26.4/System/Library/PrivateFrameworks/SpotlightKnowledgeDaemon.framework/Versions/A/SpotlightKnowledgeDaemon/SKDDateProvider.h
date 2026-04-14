@class NSTimeZone, NSCalendar, NSDate;

@interface SKDDateProvider : NSObject <SKDDateProviding>

@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) NSCalendar *currentCalendar;
@property (nonatomic, readonly) NSTimeZone *currentTimezone;

- (id)init;
- (id)addingToDate:(id)a0 component:(unsigned long long)a1 value:(long long)a2;
- (id)minusFromDate:(id)a0 component:(unsigned long long)a1 value:(long long)a2;

@end
