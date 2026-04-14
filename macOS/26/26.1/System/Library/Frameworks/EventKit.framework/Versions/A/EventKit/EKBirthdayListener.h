@class CalAccumulatingQueue, NSObject;
@protocol EKEventStoreProvider, OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    id<EKEventStoreProvider> _eventStoreProvider;
    CalAccumulatingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (BOOL)areBirthdaysEnabled;
+ (id)sharedListener;

- (id)eventStore;
- (id)eventStoreProvider;
- (id)initSingleton;
- (void)_localeChanged;
- (void)_start;
- (void)start;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)addBirthdayCalendars;
- (void)_performUpdateWithContext:(id)a0;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)incrementalUpdateWithContext:(id)a0;
- (void)disableBirthdayCalendars;
- (void)reset;
- (void)stop;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (void)checkForFailures;
- (void).cxx_destruct;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (id)eventStoreWithReset:(BOOL)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)contactsReset;
- (id)allContactsWithBirthdays;

@end
