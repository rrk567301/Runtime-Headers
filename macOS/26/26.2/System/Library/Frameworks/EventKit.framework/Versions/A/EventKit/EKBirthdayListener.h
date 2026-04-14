@class CalAccumulatingQueue, NSObject;
@protocol EKEventStoreProvider, OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    id<EKEventStoreProvider> _eventStoreProvider;
    CalAccumulatingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (id)sharedListener;
+ (BOOL)areBirthdaysEnabled;

- (id)initSingleton;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (void)contactsReset;
- (id)eventStoreProvider;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)stop;
- (void)disableBirthdayCalendars;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)reset;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void).cxx_destruct;
- (void)start;
- (void)addBirthdayCalendars;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)_start;
- (id)eventStoreWithReset:(BOOL)a0;
- (id)allContactsWithBirthdays;
- (void)_performUpdateWithContext:(id)a0;
- (void)_localeChanged;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)checkForFailures;
- (id)eventStore;
- (void)incrementalUpdateWithContext:(id)a0;

@end
