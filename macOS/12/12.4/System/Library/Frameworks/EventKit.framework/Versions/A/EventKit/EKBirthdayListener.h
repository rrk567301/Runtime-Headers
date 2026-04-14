@class CalLimitingQueue, NSObject;
@protocol OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (id)sharedListener;
+ (id)eventStoreProvider;

- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (id)eventStore;
- (void)contactsReset;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (id)initSingleton;
- (BOOL)areBirthdaysEnabled;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)_localeChanged;
- (void)checkForFailures;
- (void)setDefaultBirthdayAlarms:(id)a0 forCalendar:(id)a1;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (id)allContactsWithBirthdays;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)addBirthdayCalendars;
- (void)disableBirthdayCalendars;

@end
