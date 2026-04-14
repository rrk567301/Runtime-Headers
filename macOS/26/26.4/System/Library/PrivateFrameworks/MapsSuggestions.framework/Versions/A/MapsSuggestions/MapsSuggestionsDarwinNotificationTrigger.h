@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (void)didAddFirstObserver;
- (id)notificationName;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithNotificationName:(const char *)a0;
- (void)dealloc;

@end
