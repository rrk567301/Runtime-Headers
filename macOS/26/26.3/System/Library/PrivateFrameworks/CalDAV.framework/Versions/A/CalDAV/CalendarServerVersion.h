@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)type;
- (id)init;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;

@end
