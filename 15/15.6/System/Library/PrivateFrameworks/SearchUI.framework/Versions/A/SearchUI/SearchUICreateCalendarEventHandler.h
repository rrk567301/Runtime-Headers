@interface SearchUICreateCalendarEventHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)eventFromSFCalendarEvent:(id)a0 eventStore:(id)a1;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (char)prefersContextMenu;
- (char)prefersModalPresentation;

@end
