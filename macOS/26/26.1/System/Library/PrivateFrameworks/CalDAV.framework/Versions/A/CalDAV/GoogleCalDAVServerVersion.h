@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (id)type;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (BOOL)requiresOpeningAttachmentAsLink;
- (id)init;

@end
