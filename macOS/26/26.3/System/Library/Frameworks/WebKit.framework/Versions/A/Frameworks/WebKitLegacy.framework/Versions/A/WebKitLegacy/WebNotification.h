@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (void)finalize;
- (id)iconURL;
- (id)tag;
- (id)init;
- (id)origin;
- (id)title;
- (void)dealloc;
- (id)body;
- (id)notificationID;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;
- (id)lang;

@end
