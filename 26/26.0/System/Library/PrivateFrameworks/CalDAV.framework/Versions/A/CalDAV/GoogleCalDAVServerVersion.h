@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (BOOL)requiresOpeningAttachmentAsLink;
- (id)type;
- (id)init;
- (id)supportedCalendarComponentSets;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

@end
