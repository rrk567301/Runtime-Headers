@interface CADStatCollector : NSObject

@property (readonly, nonatomic) char wantsStores;
@property (readonly, nonatomic) char wantsCalendars;
@property (readonly, nonatomic) char wantsOccurrences;
@property (readonly, nonatomic) char wantsEvents;
@property (readonly, nonatomic) char wantsReminders;

+ (char)enabled;
+ (id)eventName;

- (char)enabled;
- (id)eventName;
- (id)desiredOccurrenceRange;
- (id)desiredReminderRange;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (void)processBirthdayCalendarEvents:(id)a0;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (void)processEvents:(id)a0;
- (void)processOccurrences:(id)a0;
- (void)processReminders:(id)a0;
- (void)processSignificantEventWithPredictedLocation:(char)a0 onSharedCalendar:(char)a1;
- (void)processStores:(id)a0;

@end
