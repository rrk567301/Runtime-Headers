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

- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)_start;
- (void)disableBirthdayCalendars;
- (void)reset;
- (void)start;
- (void)addBirthdayCalendars;
- (void)stop;
- (id)allContactsWithBirthdays;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void)_localeChanged;
- (void)contactsReset;
- (id)initSingleton;
- (void)incrementalUpdateWithContext:(id)a0;
- (void)checkForFailures;
- (void)_performUpdateWithContext:(id)a0;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (id)eventStore;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (id)eventStoreWithReset:(BOOL)a0;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (id)eventStoreProvider;
- (void).cxx_destruct;

@end
