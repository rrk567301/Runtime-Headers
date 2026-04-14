@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (id)notificationName;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)dealloc;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (id)initWithName:(id)a0;
- (id)initWithNotificationName:(const char *)a0;
- (void).cxx_destruct;

@end
