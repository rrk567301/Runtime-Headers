@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)notificationID;
- (id)tag;
- (id)body;
- (id)origin;
- (void)finalize;
- (void)dealloc;
- (id)title;
- (id)iconURL;
- (id)init;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
