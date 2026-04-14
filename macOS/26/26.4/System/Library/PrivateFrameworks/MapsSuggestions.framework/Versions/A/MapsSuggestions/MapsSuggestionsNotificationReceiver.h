@interface MapsSuggestionsNotificationReceiver : NSObject {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct { struct NotificationReceiver *__ptr_; } ; } _receiver;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithDarwinNotification:(const char *)a0 block:(id /* block */)a1;
- (id)initWithDarwinNotification:(const char *)a0 queue:(id)a1 block:(id /* block */)a2;

@end
