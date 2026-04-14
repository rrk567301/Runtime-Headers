@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (id)notificationName;
- (void)didAddFirstObserver;
- (void).cxx_destruct;
- (id)initWithNotificationName:(const char *)a0;
- (id)initWithName:(id)a0;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (void)dealloc;

@end
