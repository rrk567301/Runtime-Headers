@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)type;
- (id)init;

@end
