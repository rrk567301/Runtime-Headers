@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> { struct { struct NotificationSender *__ptr_; } ; } _sender;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)notify;
- (id)initWithDarwinNotification:(const char *)a0;
- (void)notifyWithPayloadString:(id)a0;
- (void)notifyWithState:(unsigned long long)a0;

@end
