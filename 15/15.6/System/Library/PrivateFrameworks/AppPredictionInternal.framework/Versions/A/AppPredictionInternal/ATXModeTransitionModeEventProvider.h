@class NSString;

@interface ATXModeTransitionModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithMode:(unsigned long long)a0;
- (id)dateIntervalFromEvent:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)bmStoreEventsForLast61DaysWithStartDateToday:(id)a0 endDateToday:(id)a1 includeWeekends:(char)a2 includeHolidays:(char)a3;
- (char)eventIsDuringThanksgivingShutdown:(id)a0;
- (id)eventsFromPublisher;
- (char)isEventFromProvider:(id)a0;
- (char)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(char)a2;

@end
