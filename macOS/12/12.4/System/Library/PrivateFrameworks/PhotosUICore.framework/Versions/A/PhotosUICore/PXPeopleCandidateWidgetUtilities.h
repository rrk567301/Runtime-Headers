@interface PXPeopleCandidateWidgetUtilities : NSObject

+ (id)_tomorrow;
+ (id)insertPerson:(id)a0 forDaysDictionary:(id)a1;
+ (id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)a0;
+ (BOOL)shouldFetchCandidatesForPerson:(id)a0 forDaysDictionary:(id)a1;
+ (BOOL)_pastMidnightBufferThreshold;
+ (id)_dateKeyForTomorrow;
+ (id)_dateKeyForToday;
+ (id)_dateKeyForDay:(id)a0;
+ (id)_localTimeZoneFormatStringForDate:(id)a0;

@end
