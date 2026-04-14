@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (id)supportedCalendarComponentSets;
- (BOOL)requiresOpeningAttachmentAsLink;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

@end
