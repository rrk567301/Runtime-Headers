@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (void)dealloc;
- (id)initWithName:(id)a0;
- (const char *)notificationName;
- (id)initWithNotificationName:(const char *)a0;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;

@end
