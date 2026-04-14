@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (void)finalize;
- (id)body;
- (id)title;
- (id)iconURL;
- (id)origin;
- (id)tag;
- (id)notificationID;
- (id)init;
- (void)dealloc;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
