@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)type;
- (id)init;
- (id)supportedCalendarComponentSets;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (BOOL)requiresOpeningAttachmentAsLink;

@end
