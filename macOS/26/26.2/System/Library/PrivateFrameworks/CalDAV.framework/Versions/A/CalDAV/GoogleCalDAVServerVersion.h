@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (id)type;
- (BOOL)requiresOpeningAttachmentAsLink;
- (id)init;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

@end
