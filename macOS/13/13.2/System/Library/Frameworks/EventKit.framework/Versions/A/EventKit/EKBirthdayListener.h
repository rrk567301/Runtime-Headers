@class CalLimitingQueue, NSObject;
@protocol EKEventStoreProvider, OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    id<EKEventStoreProvider> _eventStoreProvider;
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (id)sharedListener;
+ (BOOL)areBirthdaysEnabled;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)stop;
- (id)eventStore;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void)contactsReset;
- (void)_localeChanged;
- (id)initSingleton;
- (void)checkForFailures;
- (id)eventStoreProvider;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (id)eventStoreWithReset:(BOOL)a0;
- (void)addBirthdayCalendars;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)disableBirthdayCalendars;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (id)allContactsWithBirthdays;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)resetAllBirthdaysInStore:(id)a0;

@end
