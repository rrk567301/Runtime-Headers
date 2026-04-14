@interface SearchUICreateCalendarEventHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)structuredLocationFromLocation:(id)a0;
- (id)eventFromSFCalendarEvent:(id)a0 eventStore:(id)a1;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)prefersContextMenu;
- (BOOL)prefersModalPresentation;

@end
