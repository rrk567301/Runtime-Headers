@interface WebNotificationPrivate : NSObject {
    struct RefPtr<WebCore::Notification, WTF::RawPtrTraits<WebCore::Notification>, WTF::DefaultRefDerefTraits<WebCore::Notification>> { struct Notification *m_ptr; } _internal;
    unsigned long long _notificationID;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
