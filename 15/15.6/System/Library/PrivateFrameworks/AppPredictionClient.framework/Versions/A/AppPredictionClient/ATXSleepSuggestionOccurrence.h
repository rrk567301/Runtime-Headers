@class NSDateComponents;

@interface ATXSleepSuggestionOccurrence : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBedtimeComponents:(id)a0 wakeupComponents:(id)a1 weekdays:(unsigned long long)a2;

@end
