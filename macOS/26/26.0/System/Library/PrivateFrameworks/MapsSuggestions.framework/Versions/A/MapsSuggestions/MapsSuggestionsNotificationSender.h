@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> { struct NotificationSender *__ptr_; } _sender;
}

- (void)notify;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDarwinNotification:(const char *)a0;
- (void)notifyWithPayloadString:(id)a0;
- (void)notifyWithState:(unsigned long long)a0;

@end
