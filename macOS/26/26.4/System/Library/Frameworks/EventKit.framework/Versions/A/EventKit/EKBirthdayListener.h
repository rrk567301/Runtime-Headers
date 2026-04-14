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

- (void)stop;
- (id)eventStoreWithReset:(BOOL)a0;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (id)initSingleton;
- (void)checkForFailures;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (void)contactsReset;
- (id)eventStore;
- (void).cxx_destruct;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)_localeChanged;
- (void)incrementalUpdateWithContext:(id)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (id)eventStoreProvider;
- (void)reset;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)start;
- (void)disableBirthdayCalendars;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)addBirthdayCalendars;
- (void)_performUpdateWithContext:(id)a0;
- (void)_start;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (id)allContactsWithBirthdays;

@end
