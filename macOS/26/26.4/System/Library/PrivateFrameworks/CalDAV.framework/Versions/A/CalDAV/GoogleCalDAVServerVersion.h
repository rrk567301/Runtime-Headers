@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (BOOL)requiresOpeningAttachmentAsLink;
- (id)type;
- (id)init;

@end
