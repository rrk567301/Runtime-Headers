@class CALTimeRange;

@interface CALEntityWithAlarmSearchElement : CALSearchElement {
    CALTimeRange *_range;
}

+ (id)entityWithAlarmSearchElement;
+ (id)entityWithAlarmSearchElementWithinRange:(id)a0;

- (void).cxx_destruct;
- (void)setTimeRange:(id)a0;
- (id)timeRange;
- (BOOL)matchesEntity:(id)a0;
- (id)initWithinRange:(id)a0;

@end
