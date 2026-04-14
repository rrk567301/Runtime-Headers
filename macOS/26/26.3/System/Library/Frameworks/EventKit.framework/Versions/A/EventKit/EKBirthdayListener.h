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

- (void)contactsReset;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)addBirthdayCalendars;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)start;
- (void)checkForFailures;
- (void)stop;
- (void)incrementalUpdateWithContext:(id)a0;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void)disableBirthdayCalendars;
- (void)_localeChanged;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)_start;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (id)eventStoreWithReset:(BOOL)a0;
- (void)_performUpdateWithContext:(id)a0;
- (void).cxx_destruct;
- (id)allContactsWithBirthdays;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)reset;
- (id)initSingleton;
- (id)eventStore;
- (id)eventStoreProvider;
- (id)birthdayCalendarsInStore:(id)a0;

@end
