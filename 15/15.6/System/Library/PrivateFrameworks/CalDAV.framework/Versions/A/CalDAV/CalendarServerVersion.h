@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (char)supportsTimeRangeFilterWithoutEndDate;

@end
