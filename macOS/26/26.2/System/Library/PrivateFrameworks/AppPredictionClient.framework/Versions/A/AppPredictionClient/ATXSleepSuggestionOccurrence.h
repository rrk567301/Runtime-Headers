@class NSDateComponents;

@interface ATXSleepSuggestionOccurrence : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBedtimeComponents:(id)a0 wakeupComponents:(id)a1 weekdays:(unsigned long long)a2;

@end
