@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (void)didRemoveLastObserver;
- (id)notificationName;
- (void)didAddFirstObserver;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (id)initWithNotificationName:(const char *)a0;

@end
