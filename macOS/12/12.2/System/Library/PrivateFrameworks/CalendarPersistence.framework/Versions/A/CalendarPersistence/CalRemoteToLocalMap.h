@class NSMutableDictionary;

@interface CalRemoteToLocalMap : NSObject

@property (retain) NSMutableDictionary *reminderCalendars;
@property (retain) NSMutableDictionary *eventCalendars;
@property (retain) NSMutableDictionary *subscriptionCalendars;

+ (id)mapAfterCreatingMissingLocalCalendarsWithGroup:(id)a0 includeEvents:(BOOL)a1 includeReminders:(BOOL)a2 inContext:(id)a3;
+ (id)_titleWithFallbackForCalendar:(id)a0;
+ (id)_existingLocalCalendarsMapWithContext:(id)a0 includeEvents:(BOOL)a1 includeReminders:(BOOL)a2;
+ (id)_findMissingInGroup:(id)a0 fromMap:(id)a1 includeEvents:(BOOL)a2 includeReminders:(BOOL)a3;
+ (id)_localCloneFromRemoteCalendar:(id)a0;

- (void)dealloc;
- (id)init;
- (id)mappedCalendarForCalendar:(id)a0;
- (void)_addCalendar:(id)a0 includeEvents:(BOOL)a1 includeReminders:(BOOL)a2;

@end
