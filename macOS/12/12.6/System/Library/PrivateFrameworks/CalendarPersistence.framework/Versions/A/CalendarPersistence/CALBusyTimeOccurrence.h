@class CALDate, CALDuration;

@interface CALBusyTimeOccurrence : CALOccurrence {
    CALDate *_cachedEndDate;
    CALDuration *_cachedDuration;
    int _type;
}

- (void).cxx_destruct;
- (int)type;
- (id)endDate;
- (id)duration;
- (id)occurrenceID;
- (id)initWithEntity:(id)a0 withFreeBusyTime:(id)a1;

@end
