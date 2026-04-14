@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (void)finalize;
- (id)tag;
- (id)origin;
- (id)body;
- (void)dealloc;
- (id)iconURL;
- (id)notificationID;
- (id)init;
- (id)title;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
