@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)iconURL;
- (id)title;
- (id)tag;
- (unsigned long long)notificationID;
- (id)origin;
- (id)body;
- (id)dir;
- (id)lang;
- (id)initWithCoreNotification:(struct NakedPtr<WebCore::Notification> { struct Notification *x0; })a0 notificationID:(unsigned long long)a1;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;

@end
