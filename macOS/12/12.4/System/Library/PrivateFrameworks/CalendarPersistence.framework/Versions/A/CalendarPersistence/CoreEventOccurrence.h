@class CALDate, CalEventOccurrence, CALDuration;

@interface CoreEventOccurrence : CALOccurrence {
    CALDate *_cachedEndDate;
    CALDuration *_cachedDuration;
}

@property (retain, nonatomic) CalEventOccurrence *regularOccurrence;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)event;
- (id)endDate;
- (id)duration;
- (void)restore;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (id)summary;
- (void)setStartDate:(id)a0 endDate:(id)a1;
- (id)initWithOccurrableEntity:(id)a0 withStartDate:(id)a1;
- (void)moveToStartDate:(id)a0;
- (void)setStartDateAndTimeZone:(id)a0;
- (void)invalidateCachedEndDate;
- (BOOL)isFullDayOccurrence;
- (id)timeRangeForFullDayOccurrence;
- (id)makeEntityFromOccurrence;

@end
