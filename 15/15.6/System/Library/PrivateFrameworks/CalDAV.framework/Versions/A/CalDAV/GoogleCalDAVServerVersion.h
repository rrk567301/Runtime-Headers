@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (char)requiresOpeningAttachmentAsLink;
- (char)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)supportedCalendarComponentSets;

@end
