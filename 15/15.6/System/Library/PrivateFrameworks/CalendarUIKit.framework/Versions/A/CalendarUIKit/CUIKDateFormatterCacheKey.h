@class NSCalendar;

@interface CUIKDateFormatterCacheKey : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) char is24HourFormat;
@property (readonly, nonatomic) char dropDesignator;
@property (readonly, nonatomic) char canDropMinutes;
@property (readonly, nonatomic) char designatorRequiresWhitespace;
@property (readonly, nonatomic) char addDate;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 is24HourFormat:(char)a1 dropDesignator:(char)a2 canDropMinutes:(char)a3 designatorRequiresWhitespace:(char)a4 addDate:(char)a5;

@end
