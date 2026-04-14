@interface CalSuggestedEventMonitor : CalPersistenceMonitor

+ (id)sharedMonitor;
+ (BOOL)showEventsFoundInMail;
+ (BOOL)hasSuggestedEventCalendarInContext:(id)a0;
+ (BOOL)hasNaturalLanguageSuggestedEventCalendarInContext:(id)a0;
+ (id)_suggestedEventCalendarInContext:(id)a0;
+ (id)_naturalLanguageSuggestedEventCalendarInContext:(id)a0;
+ (BOOL)shouldSuppressMessagesForEvent:(id)a0;
+ (id)originBundleIdentifierForEvent:(id)a0;
+ (id)appNameForBundleID:(id)a0;
+ (id)_unpackLocalStructuredDataForEvent:(id)a0;

- (void)managedObjectContextWillSave:(id)a0;
- (id)senderForEventWithSuggestionID:(id)a0;
- (void)removeSuggestedEventCalendar;
- (void)createSuggestedEventCalendar;
- (void)createNaturalLanguageSuggestedEventCalendar;
- (BOOL)isInterestedInContext:(id)a0;
- (void)_updateMessageDetails:(id)a0 forAddedSuggestionEvent:(id)a1;
- (void)addMessageForSuggestedEvent:(id)a0 context:(id)a1;
- (void)traceSuggestedEventUpdate:(id)a0;
- (void)updateMessageForSuggestedEvent:(id)a0;
- (void)removeNaturalLanguageSuggestedEventCalendar;
- (void)messageTraceIgnoredSuggestedEvents;

@end
