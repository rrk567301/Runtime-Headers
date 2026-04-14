@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)notificationID;
- (void)finalize;
- (id)origin;
- (id)tag;
- (id)title;
- (id)init;
- (void)dealloc;
- (id)body;
- (id)iconURL;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
