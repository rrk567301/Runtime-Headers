@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)notificationName;
- (id)initWithName:(id)a0;
- (id)initWithNotificationName:(const char *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;

@end
