@class CALDate, CALDateTime, NSTimeZone;

@interface CoreEvent : CALEntity {
    CALDate *_eventCachedEndDate;
    CALDate *_alldaycacheStart;
    CALDateTime *_alldaycacheEnd;
    NSTimeZone *_alldaycacheTimeZone;
    double _travelDuration;
}

@property (readonly) BOOL hasEverUsedWorkingElswhere;

+ (id)event;
+ (id)entityFromManagedObject:(id)a0;
+ (id)entityFromManagedObject:(id)a0 omitAttendees:(BOOL)a1;

- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (id)endDate;
- (id)duration;
- (void)setDuration:(id)a0;
- (void)setPriority:(int)a0;
- (int)priority;
- (id)endLocation;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (id)locations;
- (void)setLocations:(id)a0;
- (id)locationString;
- (id)structuredLocation;
- (id)linkID;
- (void)setLinkID:(id)a0;
- (id)travelDuration;
- (void)setTravelDuration:(id)a0;
- (BOOL)needsReply;
- (void)cleanUp;
- (int)transparency;
- (void)setTransparency:(int)a0;
- (void)setEndLocation:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (BOOL)isYearlessBirthday;
- (id)travelStartLocation;
- (void)setTravelStartLocation:(id)a0;
- (BOOL)isOrganizerMe;
- (id)checkValidity;
- (BOOL)isExchangeCompatible;
- (BOOL)hasOccurrencesThatOverlap;
- (void)actualCommitInManagedObjectContext:(id)a0;
- (BOOL)isValidStatus:(int)a0;
- (Class)correspondingOccurrenceClass;
- (id)expandOnTimeRange:(id)a0;
- (void)forceDatesToGMT;
- (void)releaseCachedEndDate;
- (void)invalidateEntityCaches;
- (BOOL)isFullDayEvent;
- (id)lastSavedDuration;
- (void)setFullDayEvent:(BOOL)a0 withHintTimeRange:(id)a1;
- (BOOL)isOverlappingAdjacentOccurrenceForStartDate:(id)a0 endDate:(id)a1 originalStartDate:(id)a2;
- (BOOL)isOverlappingAlarmForStartDate:(id)a0 endDate:(id)a1 newDuration:(id)a2;
- (id)humanReadableRepeatDescription;
- (BOOL)hasAlarmWithDuration:(id)a0 thatOverlapsOccWithStartDate:(id)a1 andEndDate:(id)a2;
- (void)moveToStartDate:(id)a0;
- (void)setFullDayEvent:(BOOL)a0;
- (void)removePriority;
- (void)removeTransparency;
- (void)setNeedsReply:(BOOL)a0;
- (BOOL)isOrganizerOwner;
- (id)birthdayName;
- (void)setBirthdayName:(id)a0;
- (void)setIsYearlessBirthday:(BOOL)a0;
- (id)defaultAlarmsBasedOnItemAndPreferencesInContext:(id)a0;
- (id)upperBoundDate;
- (id)_makeExchangeCompatible;
- (BOOL)_isAlarmExchangeCompatible:(id)a0;
- (void)_makeAlarmExchangeCompatible:(id)a0;

@end
